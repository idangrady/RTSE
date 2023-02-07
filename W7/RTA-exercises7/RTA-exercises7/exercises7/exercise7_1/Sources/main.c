#include <ucos_ii.h>
#include "cpu.h"
#include "ATD_driver.h"
#include "Led_driver.h"

#define TASK_STK_SIZE 128
OS_STK TaskStartStk[TASK_STK_SIZE];
OS_STK Task1Stk[TASK_STK_SIZE];
OS_STK Task2Stk[TASK_STK_SIZE];
OS_STK Task3Stk[TASK_STK_SIZE];

#define PAD11Threshold 5
#define PAD12Threshold 5
#define PAD13Threshold 5
#define PAD14Threshold 5

/*
 * Task parameters.
 *
 * Note that:
 * - lower number means higher priority.
 * - RTI interrupt is set to expire with frequency of 1kHz. Hence, 
 *   1 tick corresponds to 1ms.
 */
  
#define TaskStartPrio  2
#define MutexPrio      3
#define Task1Prio      4
#define Task2Prio      6
#define Task3Prio      8


#define Task1Period    10
#define Task2Period    15
#define Task3Period    20

#define Task1Phasing   0
#define Task2Phasing   1
#define Task3Phasing   2
	      

/*
 * Each task reads an analogue input connected to the ATD converter
 * on a certain port, compares it to a threshold, and turns a led
 * on if and only if the value is greater than the threshold.
 */

void Task1(void) {
  SetLed(LED_D29, ATDReadChannel(PAD11) > PAD11Threshold);
}

void Task2(void) {
  SetLed(LED_D28, ATDReadChannel(PAD12) > PAD12Threshold);
}

void Task3(void) {
  SetLed(LED_D27, ATDReadChannel(PAD13) > PAD13Threshold);
}


void TaskStart(void* p_args) {
  /* Do not remove this code. The timer must be started after OSStart() has
     started the start task. */
  CPUStartTimer(); 
  
	/* Do not remove this code. This task must remain active during the entire run. */
  for (;;){
    OSTimeDly(OS_TICKS_PER_SEC); 
  }
}

void main(void) {  
  /* Initialize uC/OS-II and create the startup task
     It should not be neccesary to modify this function.
   */
  OSInit();
  
  /* Here you should create any synchronization primitives. */

  /* Here you can register your tasks */
  OSTaskCreatePeriodic(Task1, Task1Period, Task1Phasing, &Task1Stk[TASK_STK_SIZE-1], Task1Prio);
  OSTaskCreatePeriodic(Task2, Task2Period, Task2Phasing, &Task2Stk[TASK_STK_SIZE-1], Task2Prio);
  OSTaskCreatePeriodic(Task3, Task3Period, Task3Phasing, &Task3Stk[TASK_STK_SIZE-1], Task3Prio);

  /* Do not remove this code. */
  OSTaskCreate(TaskStart, (void *)0, &TaskStartStk[TASK_STK_SIZE-1], TaskStartPrio);
  
  OSStart();
}















