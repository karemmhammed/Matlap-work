/*
 * File: Factorial_Task.h
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

#ifndef RTW_HEADER_Factorial_Task_h_
#define RTW_HEADER_Factorial_Task_h_
#include <stddef.h>
#ifndef Factorial_Task_COMMON_INCLUDES_
# define Factorial_Task_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Factorial_Task_COMMON_INCLUDES_ */

#include "Factorial_Task_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  uint32_T Output;                     /* '<Root>/Output' */
} ExtY_Factorial_Task_T;

/* Real-time Model Data Structure */
struct tag_RTM_Factorial_Task_T {
  const char_T * volatile errorStatus;
};

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_Factorial_Task_T Factorial_Task_Y;

/* Model entry point functions */
extern void Factorial_Task_initialize(void);
extern void Factorial_Task_step(void);
extern void Factorial_Task_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Factorial_Task_T *const Factorial_Task_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Display' : Unused code path elimination
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'Factorial_Task'
 * '<S1>'   : 'Factorial_Task/Chart'
 */
#endif                                 /* RTW_HEADER_Factorial_Task_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
