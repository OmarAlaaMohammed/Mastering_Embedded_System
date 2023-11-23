
/*
 * timer_app.c
 *
 * Created: 8/25/2023 11:41:03 AM
 *  Author: safifi
 */ 


#include "Timer.h"
#include "LCD.h"
#include "LCD_cfg.h"
#include "Seven_Segments.h"

volatile uint16_t x = 0;

int main(void)
{
	SS_init();
	timer0_normal_init();
	LCD_init();

    while(1)
    {
		x++;
		_delay_ms(300);
    }
}

/* freq = 16Mhz ==> c.c = 1/16 usec ===> time_ovf = 256* 1/16 usec == 16 usec
	time_ovf * count = 100000 usec
	16 usec * count = 100000 usec
	count = 6250 ==> 100 ms
*/

ISR(TIMER0_OVF_vect){
	static uint16_t en_ss = 0 ,ss_count_ovf = 0;
	ss_count_ovf++;
	//lcd_count_ovf++;
	
	if(ss_count_ovf == 6250){ // 100msec
		LCD_write_command(FIRST_LINE(0));
		LCD_write_num(x);
		if(en_ss == 0){
			SS_write(x%10, 2);
			en_ss = 1;
		}
		else{	
			SS_write(x/10, 1);
			en_ss = 0;
		}		
		ss_count_ovf = 0;
	}
	
}