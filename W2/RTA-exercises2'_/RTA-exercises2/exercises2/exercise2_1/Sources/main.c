/*
 * 2IN60, Exercises 2
 */
 
#include "cpu.h"
#include "ATD_driver.h"
#include "Led_driver.h"

#define LightThreshold  -1000
 
/*
 * Task1 toggles the LED on port D23.
 */
    
void Task1(void) {
	/* Implement the task here */
         ToggleLed(LED_D23)  ;
	
}


/*
 * Task2 senses the light sensor on the port PAD14, and toggles LEDs on ports
 * D22, D24, and D26 if the sensed value is larger than the LightThreshold.
 * Otherwise, it does nothing.
 */
    
void Task2(void) {
	/* Implement the task here */
	int ATD14 = ATDReadChannel(PAD14);
	
	if(ATD14 > LightThreshold){
	  ToggleLed(LED_D22);ToggleLed(LED_D24);ToggleLed(LED_D26);	
	}
	
  // Activate the ports
}

int main(void) { 
  /* Initialize the system */
  CPUInitSystem();
  InitLeds ();
  

   asm nop; 
  Task1() ;
  asm nop;
  Task2();
    asm nop;

  return (0);
}
