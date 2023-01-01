/*
 * 2IN60, Exercises 2
 */
 
#include "cpu.h"
#include "ATD_driver.h"
#include "Led_driver.h"

#define LightThreshold 20
 
/*
 * Task1 toggles the LED on port D23.
 */
    
void Task1(void)  {
	/* Implement the task here */
}


/*
 * Task2 senses the light sensor on the port PAD14, and if the sensed
 * value is larger than the LightThreshold, then it senses the input 
 * on PAD13 and if the input is larger than 0 then it turns the LED_D22
 * on, otherwise (if the input is smaller or equal to 0) it turns 
 * the LED_D22 off.
 */
    
void Task2(void)  {
	/* Implement the task here */
}


int main(void) { 
  int i = 0;
 
  /* Initialize the system */
  CPUInitSystem();
  InitLeds ();
  _EINT(); /* Enable interrupts */
  CPUStartTimer(); 
  
  asm nop;
  
  /* Do the work */
  while (i < 1000) {
    asm wai;    
    Task1();
    Task2();
    i++;
  }

  asm nop;
  
  /* 1001st job of Task1 */
  Task1();
  
  return (0);
}
