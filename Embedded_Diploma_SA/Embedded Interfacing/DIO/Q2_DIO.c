
#include "Generic_Macros_Header.h"

/*2.
Write a code to make led 1 toggle every 100 ms when press push button first time and make the led toggle
every 500 ms when press again on push button and toggle again every 100 ms when pressing again on push
button use external interrupt*/

int FLAG = 0;
	
int main(void)
{
	SETBIT(DDRB,PB4);	//Setting PB4 as an output//
	CLRBIT(DDRD,PD3);	//Setting PD3 as in input//
	SETBIT(PORTD,PD3);	//Setting PD3 as pull up//

/*Setting ISC10 = 1 and Clearing ISC11 = 1 in MCU control register to make the Interrupt 1
Any rising change on INT1 generates an interrupt request.*/
	
	SETBIT(MCUCR,ISC11);
	SETBIT(MCUCR,ISC10);
	SETBIT(GICR,INT1);	  //Enabling the external interrupt pin//
	SETBIT(SREG,7);		  // SREG is Status Register, in order to use interrupts we must enable bit 7 (Global Interrupt Enable)//
	
    while (1) 
    {
		
		if(FLAG == 1)
		{
			CLRBIT(PORTB,PB4);
		}
		
		else if (FLAG == 2)
		{
			TOGBIT(PORTB,PB4);
			_delay_ms(20);
		}
		else if(FLAG == 3){
			TOGBIT(PORTB,PB4);
			_delay_ms(500);
		}
	
	}
}

ISR(INT1_vect){
	FLAG++;	     
	/*Flag is equal to 0, once the pushbutton is pressed the ISR is called and increment the Flag
	and check the if conditions in the main.*/

	if(FLAG > 3){		/*The if condition is to make sure that the Flag is maximum 3 
						  Flag = 1 -> LED is off
						  Flag = 2 -> LED is blinking every 20ms
						  Flag = 3 -> LED is blinking every 500ms*/
		FLAG = 2;
	}
}
