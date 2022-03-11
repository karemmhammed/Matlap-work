/*
 * File: Factorial_Task.c
 *
 * Code generated for Simulink model 'Factorial_Task'.
 *
 * Model version                  : 1.14
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Fri Mar 11 02:34:38 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Factorial_Task.h"
#include "Factorial_Task_private.h"

/* External outputs (root outports fed by signals with default storage) */
ExtY_Factorial_Task_T Factorial_Task_Y;

/* Real-time model */
RT_MODEL_Factorial_Task_T Factorial_Task_M_;
RT_MODEL_Factorial_Task_T *const Factorial_Task_M = &Factorial_Task_M_;
void mul_wide_u32(uint32_T in0, uint32_T in1, uint32_T *ptrOutBitsHi, uint32_T
                  *ptrOutBitsLo)
{
  uint32_T outBitsLo;
  uint32_T in0Lo;
  uint32_T in0Hi;
  uint32_T in1Lo;
  uint32_T in1Hi;
  uint32_T productHiLo;
  uint32_T productLoHi;
  in0Hi = in0 >> 16U;
  in0Lo = in0 & 65535U;
  in1Hi = in1 >> 16U;
  in1Lo = in1 & 65535U;
  productHiLo = in0Hi * in1Lo;
  productLoHi = in0Lo * in1Hi;
  in0Lo *= in1Lo;
  in1Lo = 0U;
  outBitsLo = (productLoHi << /*MW:OvBitwiseOk*/ 16U) + /*MW:OvCarryOk*/ in0Lo;
  if (outBitsLo < in0Lo) {
    in1Lo = 1U;
  }

  in0Lo = outBitsLo;
  outBitsLo += /*MW:OvCarryOk*/ productHiLo << /*MW:OvBitwiseOk*/ 16U;
  if (outBitsLo < in0Lo) {
    in1Lo++;
  }

  *ptrOutBitsHi = (((productLoHi >> 16U) + (productHiLo >> 16U)) + in0Hi * in1Hi)
    + in1Lo;
  *ptrOutBitsLo = outBitsLo;
}

uint32_T mul_u32_sat(uint32_T a, uint32_T b)
{
  uint32_T result;
  uint32_T u32_chi;
  mul_wide_u32(a, b, &u32_chi, &result);
  if (u32_chi) {
    result = MAX_uint32_T;
  }

  return result;
}

/* Model step function */
void Factorial_Task_step(void)
{
  int32_T b_index;

  /* Chart: '<Root>/Chart' */
  Factorial_Task_Y.Output = 1U;
  for (b_index = 1; b_index < 6; b_index++) {
    /* NEW_PATTERN */
    Factorial_Task_Y.Output = mul_u32_sat(Factorial_Task_Y.Output, (uint32_T)
      b_index);
  }

  /* End of Chart: '<Root>/Chart' */
}

/* Model initialize function */
void Factorial_Task_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Factorial_Task_M, (NULL));

  /* external outputs */
  Factorial_Task_Y.Output = 0U;
}

/* Model terminate function */
void Factorial_Task_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
