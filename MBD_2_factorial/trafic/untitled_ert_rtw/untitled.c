/*
 * File: untitled.c
 *
 * Code generated for Simulink model 'untitled'.
 *
 * Model version                  : 1.6
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Fri Mar 11 03:16:13 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "untitled.h"
#include "untitled_private.h"

/* Named constants for Chart: '<Root>/Chart' */
#define untitled_IN_Green              ((uint8_T)1U)
#define untitled_IN_NO_ACTIVE_CHILD    ((uint8_T)0U)
#define untitled_IN_Red                ((uint8_T)2U)
#define untitled_IN_Yellow             ((uint8_T)3U)

/* Block states (default storage) */
DW_untitled_T untitled_DW;

/* External outputs (root outports fed by signals with default storage) */
ExtY_untitled_T untitled_Y;

/* Real-time model */
RT_MODEL_untitled_T untitled_M_;
RT_MODEL_untitled_T *const untitled_M = &untitled_M_;

/* Model step function */
void untitled_step(void)
{
  /* Chart: '<Root>/Chart' */
  if (untitled_DW.temporalCounter_i1 < 31U) {
    untitled_DW.temporalCounter_i1++;
  }

  if (untitled_DW.is_active_c3_untitled == 0U) {
    untitled_DW.is_active_c3_untitled = 1U;
    untitled_DW.is_c3_untitled = untitled_IN_Red;
    untitled_DW.temporalCounter_i1 = 0U;

    /* Outport: '<Root>/Output2' */
    untitled_Y.Output2 = 1.0;

    /* Outport: '<Root>/Output1' */
    untitled_Y.Output1 = 0.0;

    /* Outport: '<Root>/Output' */
    untitled_Y.Output = 0.0;
  } else {
    switch (untitled_DW.is_c3_untitled) {
     case untitled_IN_Green:
      if (untitled_DW.temporalCounter_i1 >= 15U) {
        untitled_DW.is_c3_untitled = untitled_IN_Red;
        untitled_DW.temporalCounter_i1 = 0U;

        /* Outport: '<Root>/Output2' */
        untitled_Y.Output2 = 1.0;

        /* Outport: '<Root>/Output1' */
        untitled_Y.Output1 = 0.0;

        /* Outport: '<Root>/Output' */
        untitled_Y.Output = 0.0;
      } else {
        /* Outport: '<Root>/Output' */
        untitled_Y.Output = 1.0;
      }
      break;

     case untitled_IN_Red:
      if (untitled_DW.temporalCounter_i1 >= 15U) {
        untitled_DW.is_c3_untitled = untitled_IN_Yellow;
        untitled_DW.temporalCounter_i1 = 0U;

        /* Outport: '<Root>/Output1' */
        untitled_Y.Output1 = 1.0;

        /* Outport: '<Root>/Output2' */
        untitled_Y.Output2 = 0.0;

        /* Outport: '<Root>/Output' */
        untitled_Y.Output = 0.0;
      } else {
        /* Outport: '<Root>/Output2' */
        untitled_Y.Output2 = 1.0;
      }
      break;

     default:
      if (untitled_DW.temporalCounter_i1 >= 15U) {
        untitled_DW.is_c3_untitled = untitled_IN_Green;
        untitled_DW.temporalCounter_i1 = 0U;

        /* Outport: '<Root>/Output' */
        untitled_Y.Output = 1.0;

        /* Outport: '<Root>/Output2' */
        untitled_Y.Output2 = 0.0;

        /* Outport: '<Root>/Output1' */
        untitled_Y.Output1 = 0.0;
      } else {
        /* Outport: '<Root>/Output1' */
        untitled_Y.Output1 = 1.0;
      }
      break;
    }
  }

  /* End of Chart: '<Root>/Chart' */
}

/* Model initialize function */
void untitled_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(untitled_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&untitled_DW, 0,
                sizeof(DW_untitled_T));

  /* external outputs */
  (void) memset((void *)&untitled_Y, 0,
                sizeof(ExtY_untitled_T));

  /* SystemInitialize for Chart: '<Root>/Chart' */
  untitled_DW.temporalCounter_i1 = 0U;
  untitled_DW.is_active_c3_untitled = 0U;
  untitled_DW.is_c3_untitled = untitled_IN_NO_ACTIVE_CHILD;
}

/* Model terminate function */
void untitled_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
