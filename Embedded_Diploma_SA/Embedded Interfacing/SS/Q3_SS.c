/*
 * SevenSegments.c
 *
 * Created: 8/22/2023 5:18:57 PM
 * Author : BeZla
 */ 

#include "Seven_Segments.h"
#include "Seven_Segments_cfg.h"

uint8_t x = 0;

int main(void)
{
	SS_init();
    while (1) 
    {
		while(x < 100){
			
			if(x < 10){			
				SS_write(x,2);		//Use only the first seven segment to write 1 digit number//
				_delay_ms(10);
			}
			
			else{
				SS_write(x/10,1);	//Write on SS1 the value of x/10 EX 52 ----> 52/10 = 5//
				_delay_ms(10);
				SS_write(x%10,2);	//Write on SS2 the value of x%10 EX 52 ----> 52%10 = 2//
				_delay_ms(10);
			}
			x++;					//Increment x//
		}
		break;
		
    }
}

