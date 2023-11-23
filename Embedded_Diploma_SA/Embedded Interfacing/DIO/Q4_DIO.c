
#include "Generic_Macros_Header.h"

/*4.Write a code to use external interrupt to make led on
 when press on push button and off when pressing again.*/

int main(void)
{
    SETBIT(DDRB,PB4);		//Using PB4 as an output (LED)//
	CLRBIT(DDRD,PD3);		//Using PD3 as in input (PushButton)//
	SETBIT(PORTD,PD3);		//PD3 is a pullup//
	
	/*Setting ISC10 = 1 and Clearing ISC11 = 1 in MCU control register to make the Interrupt 1
	  The rising edge of INT1 generates an interrupt request.*/

	SETBIT(MCUCR,ISC10);	
	SETBIT(MCUCR,ISC11);
	SETBIT(GICR,INT1);		//Enabling the external interrupt pin//
	SETBIT(SREG,7);			//SREG is Status Register, in order to use interrupts we must enable bit 7 (Global Interrupt Enable)//
	
	CLRBIT(PORTB,PB4);		//Making sure the LED is turned off in the start//

    while (1) 
    {
		
    }
	
}
	/*If the pushbutton is pressed so (-) to (+) the Led will be ON
	  once i stop pressing on the puchbutton the LED will remain ON
	  until i press again on the pushbutton because the interrupt
	  is called in rising edge ONLY*/

ISR(INT1_vect){
	TOGBIT(PORTB,PB4);
}
