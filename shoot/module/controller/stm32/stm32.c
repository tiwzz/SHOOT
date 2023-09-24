#include "stm32.h"
#include "stm32_private.h"
#include <string.h>

#define PI 3.1415926f
/* Block states (default storage) */
DW_stm32 stm32_DW_shoot_0;
DW_stm32 stm32_DW_shoot_1;
/* External inputs (root inport signals with default storage) */
ExtU_stm32 stm32_U_shoot;
/* External outputs (root outports fed by signals with default storage) */
ExtY_stm32 stm32_Y_shoot;

void stm32_shoot_pid_init(void)
{
    stm32_U_shoot.KP = 10000;
    stm32_U_shoot.KI = 80;
    stm32_U_shoot.KD = 10;
    stm32_U_shoot.N = 70; 
}



void stm32_step_shoot_0(fp32 speedset, fp32 speedback)
{
    real_T rtb_Reciprocal;
    real_T rtb_Sum_p;
    real_T rtb_IProdOut;
    real_T Integrator;
    real_T TmpSignalConversionAtFilterDifferentiatorTFInport2_idx_1;
    rtb_Sum_p = stm32_U_shoot.N * 0.0005f;
    rtb_Reciprocal = 1.0f / (rtb_Sum_p + 1.0f);
    TmpSignalConversionAtFilterDifferentiatorTFInport2_idx_1 = (rtb_Sum_p - 1.0f) *
                                                               rtb_Reciprocal;
    rtb_Sum_p = speedset - speedback;
    TmpSignalConversionAtFilterDifferentiatorTFInport2_idx_1 = rtb_Sum_p *
                                                                   stm32_U_shoot.KD -
                                                               TmpSignalConversionAtFilterDifferentiatorTFInport2_idx_1 *
                                                                   stm32_DW_shoot_0.FilterDifferentiatorTF_states;
    rtb_IProdOut = rtb_Sum_p * stm32_U_shoot.KI;
    Integrator = 0.0005f * rtb_IProdOut + stm32_DW_shoot_0.Integrator_DSTATE;
    stm32_Y_shoot.out_shoot_0 = (TmpSignalConversionAtFilterDifferentiatorTFInport2_idx_1 +
                                 -stm32_DW_shoot_0.FilterDifferentiatorTF_states) *
                                    rtb_Reciprocal *
                                    stm32_U_shoot.N +
                                (rtb_Sum_p * stm32_U_shoot.KP + Integrator);
    stm32_DW_shoot_0.FilterDifferentiatorTF_states =
        TmpSignalConversionAtFilterDifferentiatorTFInport2_idx_1;
    stm32_DW_shoot_0.Integrator_DSTATE = 0.0005f * rtb_IProdOut + Integrator;
}

void stm32_step_shoot_1(fp32 speedset, fp32 speedback)
{
    real_T rtb_Reciprocal;
    real_T rtb_Sum_p;
    real_T rtb_IProdOut;
    real_T Integrator;
    real_T TmpSignalConversionAtFilterDifferentiatorTFInport2_idx_1;
    rtb_Sum_p = stm32_U_shoot.N * 0.0005f;
    rtb_Reciprocal = 1.0f / (rtb_Sum_p + 1.0f);
    TmpSignalConversionAtFilterDifferentiatorTFInport2_idx_1 = (rtb_Sum_p - 1.0f) *
                                                               rtb_Reciprocal;
    rtb_Sum_p = speedset - speedback;
    TmpSignalConversionAtFilterDifferentiatorTFInport2_idx_1 = rtb_Sum_p *
                                                                   stm32_U_shoot.KD -
                                                               TmpSignalConversionAtFilterDifferentiatorTFInport2_idx_1 *
                                                                   stm32_DW_shoot_1.FilterDifferentiatorTF_states;
    rtb_IProdOut = rtb_Sum_p * stm32_U_shoot.KI;
    Integrator = 0.0005f * rtb_IProdOut + stm32_DW_shoot_1.Integrator_DSTATE;
    stm32_Y_shoot.out_shoot_1 = (TmpSignalConversionAtFilterDifferentiatorTFInport2_idx_1 +
                                 -stm32_DW_shoot_1.FilterDifferentiatorTF_states) *
                                    rtb_Reciprocal *
                                    stm32_U_shoot.N +
                                (rtb_Sum_p * stm32_U_shoot.KP + Integrator);
    stm32_DW_shoot_1.FilterDifferentiatorTF_states =
        TmpSignalConversionAtFilterDifferentiatorTFInport2_idx_1;
    stm32_DW_shoot_1.Integrator_DSTATE = 0.0005f * rtb_IProdOut + Integrator;
}

void stm32_step_shoot_pid_clear(void)
{
    // 清空发射摩擦轮电机PID数据
    memset((void *)&stm32_DW_shoot_0, 0, sizeof(stm32_DW_shoot_0));
    memset((void *)&stm32_DW_shoot_1, 0, sizeof(stm32_DW_shoot_1));
}


/* File trailer for Real-Time Workshop generated code.
 *
 * [EOF] stm32.c
 */
