/**
 * @file chassis_task.c
 * @author yuanluochen
 * @brief 双板步兵底盘控制任务，读取遥控器数据，通过can总线发送到底盘
 * @version 0.1
 * @date 2023-09-19
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include "chassis_task.h"
#include "cmsis_os.h"
#include "arm_math.h"
#include "pid.h"
#include "remote_control.h"
#include "CAN_receive.h"
#include "detect_task.h"
#include "INS_task.h"
#include "gimbal_task.h"
#include "gimbal_behaviour.h"
#define abs(x) ((x) > 0 ? (x) : (-x))

#define rc_deadband_limit(input, output, dealine)        \
    {                                                    \
        if ((input) > (dealine) || (input) < -(dealine)) \
        {                                                \
            (output) = (input);                          \
        }                                                \
        else                                             \
        {                                                \
            (output) = 0;                                \
        }                                                \
    }
/**
  * @brief          初始化"chassis_move"变量，包括pid初始化， 遥控器指针初始化，3508底盘电机指针初始化，云台电机初始化，陀螺仪角度指针初始化
  * @param[out]     chassis_move_init:"chassis_move"变量指针.
  * @retval         none
  */
static void chassis_init(chassis_move_t *chassis_move_init);

/**
 * @brief 底盘数据更新 
 * 
 * @param chassis_move_feedback_update  底盘控制结构体
 */
static void chassis_feedback_update(chassis_move_t *chassis_move_feedback_update); 

/**
 * @brief          设置底盘控制模式，主要在'chassis_behaviour_mode_set'函数中改变
 * @param[out]     chassis_move_mode:"chassis_move"变量指针.
 * @retval         none
 */
static void chassis_set_mode(chassis_move_t *chassis_move_mode);

/**
 * @brief 设置底盘控制量
 * 
 * @param chassis_move_control 底盘控制结构体
 */
static void chassis_set_contorl(chassis_move_t *chassis_move_control);


#if INCLUDE_uxTaskGetStackHighWaterMark
uint32_t chassis_high_water;
#endif

extern gimbal_control_t gimbal_control;

chassis_move_t chassis_move;       // 底盘运动数据
/**
  * @brief          底盘任务，间隔 CHASSIS_CONTROL_TIME_MS 2ms
  * @param[in]      pvParameters: 空
  * @retval         none
  */
void chassis_task(void const *pvParameters)
{
    //空闲一段时间
    vTaskDelay(CHASSIS_TASK_INIT_TIME);
    //底盘初始化
    chassis_init(&chassis_move);
    // 判断底盘电机是否都在线
    while (1)
    {
        //数据更新
        chassis_feedback_update(&chassis_move);
        //设置底盘控制模式
        chassis_set_mode(&chassis_move);
        //底盘控制量设置
        chassis_set_contorl(&chassis_move);

        if (toe_is_error(DBUS_TOE))
        {
            // 当遥控器离线发送控制信号为零
            CAN_cmd_chassis(0, 0, 0, 0);
        }
        else
        {
            //发送控制数据
            CAN_cmd_chassis(chassis_move.chassis_yaw_motor->relative_angle, chassis_move.vx_set, chassis_move.vy_set, chassis_move.chassis_behaviour);
        }

        // 系统延时
        vTaskDelay(CHASSIS_CONTROL_TIME_MS);

#if INCLUDE_uxTaskGetStackHighWaterMark
        chassis_high_water = uxTaskGetStackHighWaterMark(NULL);
#endif
    }
}

/**
  * @brief          初始化"chassis_move"变量，包括pid初始化， 遥控器指针初始化，3508底盘电机指针初始化，云台电机初始化，陀螺仪角度指针初始化
  * @param[out]     chassis_move_init:"chassis_move"变量指针.
  * @retval         none
  */
static void chassis_init(chassis_move_t *chassis_move_init)
{
    //获取遥控器指针
    chassis_move_init->chassis_RC = get_remote_control_point();
    //获取云台电机数据指针
    chassis_move_init->chassis_yaw_motor = get_yaw_motor_point();
    //数据更新
    chassis_feedback_update(chassis_move_init);
}

/**
 * @brief 底盘数据更新 
 * 
 * @param chassis_move_feedback_update  底盘控制结构体
 */
static void chassis_feedback_update(chassis_move_t *chassis_move_feedback_update)
{
    chassis_move_feedback_update->chassis_relative_angle = chassis_move_feedback_update->chassis_yaw_motor->relative_angle;
}


/**
  * @brief          设置底盘控制模式，主要在'chassis_behaviour_mode_set'函数中改变
  * @param[out]     chassis_move_mode:"chassis_move"变量指针.
  * @retval         none
  */
static void chassis_set_mode(chassis_move_t *chassis_move_mode)
{
    if (chassis_move_mode == NULL)
    {
        return;
    }
    // remote control  set chassis behaviour mode
    // 遥控器设置模式
    if (switch_is_down(chassis_move_mode->chassis_RC->rc.s[CHASSIS_MODE_CHANNEL]))
    {
        // 遥控器拨到下侧挡位为底盘无力模式
        chassis_move_mode->chassis_behaviour = CHASSIS_ZERO_FORCE;
    }
    else if (switch_is_mid(chassis_move_mode->chassis_RC->rc.s[CHASSIS_MODE_CHANNEL]))
    {
        // 遥控器中挡为遥控器控制模式，

        // 默认底盘跟随云台
        chassis_move_mode->chassis_behaviour = CHASSIS_FOLLOW_GIMBAL_YAW;
    }
    else if (switch_is_up(chassis_move_mode->chassis_RC->rc.s[CHASSIS_MODE_CHANNEL]))
    {
        // 上档为陀螺
        chassis_move_mode->chassis_behaviour = CHASSIS_SPIN;
    }
    else if (toe_is_error(DBUS_TOE))
    {
        //无信号, 底盘无力
        // chassis_move_mode->chassis_behaviour = CHASSIS_ZERO_FORCE;
        chassis_move_mode->chassis_behaviour = CHASSIS_NO_MOVE;
    }
    else
    {
        //其他底盘无力
        // chassis_move_mode->chassis_behaviour = CHASSIS_ZERO_FORCE;
        chassis_move_mode->chassis_behaviour = CHASSIS_NO_MOVE;
    }
    //when gimbal in some mode, such as init mode, chassis must's move
    //当云台在某些模式下，像初始化， 底盘不动
    if (gimbal_cmd_to_chassis_stop())
    {
        chassis_move_mode->chassis_behaviour = CHASSIS_NO_MOVE;
    }
}

/**
 * @brief 设置底盘控制量
 * 
 * @param chassis_move_control 底盘控制结构体
 */
static void chassis_set_contorl(chassis_move_t *chassis_move_control)
{
    fp32 vx_set_channel_RC, vy_set_channel_RC;
    int16_t vx_channel_RC, vy_channel_RC;
    // deadline, because some remote control need be calibrated,  the value of rocker is not zero in middle place,
    // 死区限制，因为遥控器可能存在差异 摇杆在中间，其值不为0
    rc_deadband_limit(chassis_move_control->chassis_RC->rc.ch[CHASSIS_X_CHANNEL], vx_channel_RC, CHASSIS_RC_DEADLINE);
    rc_deadband_limit(chassis_move_control->chassis_RC->rc.ch[CHASSIS_Y_CHANNEL], vy_channel_RC, CHASSIS_RC_DEADLINE);

    vx_set_channel_RC = vx_channel_RC * CHASSIS_VX_RC_SEN;
    vy_set_channel_RC = vy_channel_RC * CHASSIS_VY_RC_SEN;

    //设置速度
    chassis_move_control->vx_set = vx_set_channel_RC;
    chassis_move_control->vy_set = vy_set_channel_RC;
}

