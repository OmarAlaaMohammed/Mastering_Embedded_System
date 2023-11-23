
#include "Timer.h"
#include "LCD.h"
#include "LCD_cfg.h"
#include "Seven_Segments.h"

int main(void)
{
	SS_init();
	LCD_init();
	timer0_ctc_init(125); // 125 => PRESCALER => 2msec ----- 250 => NO PRESCALER => 15usec
	SETBIT(DDRD,PD1);

    while(1)
    {

    }
}

/*
				NO PRE-SCALER
c.c = 1/16 usec ==>  1/16 usec * ocr ==> 15usec
			     ocr0 = 250

count * 15usec = 500ms
count = 33334;
*/


/*
						USING PRE-SCALER
c.c = 1/16 usec ==> 1024 ==> 1024/16 usec = 64 usec * ocr ==> 10 msec
						  ocr0 = 155 

count * 10ms = 500ms
count = 50;
*/


ISR(TIMER0_COMP_vect){
	static uint16_t led_count = 0;
	led_count++;
	
	if(led_count == 50){
		TOGBIT(PORTD,PD1);
		led_count = 0;
		
	}
}
