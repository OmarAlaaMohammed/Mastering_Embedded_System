	/*
 * LCD_project.c
 *
 * Created: 8/18/2023 7:55:27 PM
 * Author : BeZla
 */ 

#include "LCD.h"
#include "Generic_Macros_Header.h"
#include "LCD_cfg.h"


int main(void)
{
	LCD_init();
	SETBIT(PORTD,PD2); // Pull up
	uint8_t x = 0;
	
	LCD_write_command(SECOND_LINE(12));
	LCD_write_string("OmarAlaa");
	
    while (1) 
    {
		LCD_write_command(FIRST_LINE(0));
		LCD_write_num(x);
		if(x == 255)
		{
			break;
		}
		x++;
		_delay_ms(10);
		
		if(READBIT(PIND,PD2) == 0){
			LCD_write_command(SHIFT_LEFT);
			while(READBIT(PIND,PD2) == 0){
				
			}
		}
		
		
		   
    }
}

