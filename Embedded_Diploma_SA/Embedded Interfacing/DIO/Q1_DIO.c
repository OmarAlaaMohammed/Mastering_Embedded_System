
#include "Generic_Macros_Header.h"

/* 1.Write a code to make led on when press on push button
     and make it off when press again on push button.*/

int main(void)
{
	SETBIT(DDRB,PB4);	//Setting PB4 as an output//
	CLRBIT(DDRD,PD3);	//Setting PD3 as in input//
	SETBIT(PORTD,PD3);	//Setting PD3 as pull up//
	
	while (1)
	{
		if(READBIT(PIND,PD3) == 0){		//If the pushbutton is pressed = 0//
			TOGBIT(PORTB,PB4);			
		}
	}
	
}
