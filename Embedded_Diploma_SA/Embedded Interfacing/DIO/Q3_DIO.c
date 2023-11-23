
#include "Generic_Macros_Header.h"


/* 3.Write a code using external interrupt to make a LED on 
when pressing on button and off when releasing the button.*/


int main(void)
{
    SETBIT(DDRB,PB4);		//Using PB4 as an output (LED)//
	CLRBIT(DDRD,PD3);		//Using PD3 as in input (PushButton)//
	SETBIT(PORTD,PD3);		//PD3 is a pullup//
	`
	/*Setting ISC10 = 1 and Clearing ISC11 = 0 in MCU control register to make the Interrupt 1
	  Any logical change on INT1 generates an interrupt request.*/

	SETBIT(MCUCR,ISC10);	
	CLRBIT(MCUCR,ISC11);
	SETBIT(GICR,INT1);		//Enabling the external interrupt pin//
	SETBIT(SREG,7);			// SREG is Status Register, in order to use interrupts we must enable bit 7 (Global Interrupt Enable)//
	
	CLRBIT(PORTB,PB4);		//making sure the LED is turned off in the start//

    while (1) 
    {
		
    }
	
}
	/*If the pushbutton is pressed so (-) to (+) the Led will be ON
	  once i stop pressing on the puchbutton (-) to (+) the LED will 
	  be turned off*/

	/*So the interuppt is being called in both rising and 
	falling to make sure its only turned on while pressing*/

ISR(INT1_vect){
	TOGBIT(PORTB,PB4);
}
