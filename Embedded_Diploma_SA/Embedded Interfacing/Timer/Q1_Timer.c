
/*
 * timer_app.c
 *
 * Created: 8/25/2023 11:41:03 AM
 *  Author: safifi
 */ 


#include "Timer.h"
#include "Seven_Segments.h"

volatile uint8_t x = 0;
int main(void)
{
	SETBIT(DDRD,PD1);
	timer0_normal_init();
	
	while(1){
		
	}
	
}

// NO PRESCALER //

/* c.c = 1/16 usec ==> ovf = 256 * 1/16 = 16 usec
ovf * count = 1sec
16usec * count = 1sec
count = 62500 */

ISR(TIMER0_OVF_vect){
	static uint16_t count = 0;
	count++;
	if(count == 62500){
		TOGBIT(PORTD,PD1);
		count = 0;
	}
}

// 1024 PRESCALER // 
/* c.c = 1/16 usec ==> ovf = 1024 *256* 1/16 = 16384 usec
ovf * count = 1sec
16384 usec * count = 1sec
count = 61 */
