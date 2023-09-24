/**
 * @file can_comm.c
 * @author yuanluochen
 * @brief 多设备通信模块，主要用于控制板之间的通信，使用can总线实现
 * @version 0.1
 * @date 2023-09-17
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include "can_comm.h"
#include "main.h"
#include "CRC8_CRC16.h"
#include <string.h>
#include <stdlib.h>


/**
 * @brief can设备通信函数 
 * 
 * @param can_comm_transmit can设备通信结构体 
 * @param data 发送数据指针
 * @param data_len 数据长度
 */
void can_comm_transmit(can_comm_t *can_comm_transmit, uint8_t* data, uint8_t data_len)
{
    //判断发送数据是否符合要求
    if ((data_len > CAN_COMM_MAX_BUFSIZE) || (can_comm_transmit == NULL) || (data == NULL))
    {
        //不符合要求,直接退出
        return;
    }
    //发送数据长度
    uint8_t transmit_len = 0;
    //赋值发送数据参数
    can_comm_transmit->transmit_buf_len = data_len;
    //赋值头帧
    can_comm_transmit->transmit_buf[0] = CAN_COMM_HEADER;
    //赋值长度
    can_comm_transmit->transmit_buf[1] = can_comm_transmit->transmit_buf_len;
    //赋值数据段
    memcpy(can_comm_transmit->transmit_buf + 2, data, can_comm_transmit->transmit_buf_len);
    //赋值帧尾
    can_comm_transmit->transmit_buf[2 + can_comm_transmit->transmit_buf_len] = CAN_COMM_TAIL;
    //在发送数据末尾添加crc8检验
    append_CRC8_check_sum(can_comm_transmit->transmit_buf, can_comm_transmit->transmit_buf_len);

    //数据发送，根据数据大小确定发送次数
    for (int i = 0; i < can_comm_transmit->transmit_buf_len; i += 8)
    {
        //计算该次发送数据长度
        transmit_len = can_comm_transmit->transmit_buf_len - i >= 8 ? 8 : can_comm_transmit->transmit_buf_len - i;
        //设置该次发送数据长度

        //拷贝发送数据
        // memcpy(can_comm_transmit->)
        
    }
    
}
