
#include "Seven_Segments.h"
#include "Seven_Segments_cfg.h"

/*2.Display a double digits like 35 on both seven segment*/
int main(void)
{
	uint8_t x = 52;
	SS_init();				//Calling the initialization function of the seven segment//

    while (1) 
    {
		
		SS_write(x/10,1);   //52/20 = 5.2 but will only take the 5 because its not float//
		_delay_ms(10);
		SS_write(x%10,2);	//52 % 10 = 2//
		_delay_ms(10);
    }
}

