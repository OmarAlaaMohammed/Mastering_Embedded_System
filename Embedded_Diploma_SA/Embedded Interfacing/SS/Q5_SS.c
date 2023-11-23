/*
 * SevenSegments.c
 *
 * Created: 8/22/2023 5:18:57 PM
 * Author : BeZla
 */ 

#include "Seven_Segments.h"
#include "Seven_Segments_cfg.h"



uint8_t x = 0;
void Number_Inc_Dec_Pushbutton();		//Function Prototype//

int main(void)
{
	
	CLRBIT(DDRA,PA0);	//Setting the direction of PA0 as an input//
	CLRBIT(DDRA,PA1);   //Setting the direction of PA1 as an input//
	SETBIT(PORTA,PA0);	//Setting both PA0 and PA1 as pull up//
	SETBIT(PORTA,PA1);
	
	SS_init();			//Calling the Seven Segment initialization function//

    while (1) 
    {
		while(x < 10){							//Use only the first seven segment to wrtie 1 digit number//
			Number_Inc_Dec_Pushbutton();
			SS_write(x,2);						//Write on SS the value of x//
			_delay_ms(10);		
		}
		
		while(x > 9){
			Number_Inc_Dec_Pushbutton();
			SS_write(x/10,1); _delay_ms(10);	//Write on SS1 the value of x/10 EX 52 ----> 52/10 = 5//
			SS_write(x%10,2); _delay_ms(10);	//Write on SS2 the value of x%10 EX 52 ----> 52%10 = 2//

			if(x == 99){						//If x reached 99 reset x//
				x=0;
			}
		}

		
    }
}

/*****************************************************************************
* Function Name: Number_Inc_Dec_Pushbutton
* Purpose      : incrementing and decrementing the number on the seven 
				 segments using two push buttons
* Parameters   : void
* Return value : void
*****************************************************************************/

void Number_Inc_Dec_Pushbutton(){
	if(READBIT(PINA,PA0) == 0){
		while(READBIT(PINA,PA0) == 0){}
		x++;
	}
	if(READBIT(PINA,PA1) == 0){
		x--;
		while(READBIT(PINA,PA1) == 0){}
	}
}
