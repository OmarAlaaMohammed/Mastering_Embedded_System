
#include "LCD.h"
#include "Generic_Macros_Header.h"
#include "LCD_cfg.h"

/*3. Display a counter on LCD that count from 0 to 255 every 1 second*/

int main(void)
{
	LCD_init();
	uint8_t x = 0;
    while (1) 
    {
    	
		LCD_write_command(FIRST_LINE(0));
		LCD_write_num(x);
		if(x == 255)
		{
			break;
		}
		x++;
		_delay_ms(1000);
		  
    }
}

