
#include "KEYPAD.h"
#include "LCD.h"
#include "LCD_cfg.h"

int main(void)
{
	
	LCD_init();
	keypad_init();
	LCD_write_command(FIRST_LINE(0));
	LCD_write_string("Omar");
	
    while (1) 
    {
		uint8_t Key_Pressed = keypad_read();
		if(Key_Pressed != 200){

			if(Key_Pressed == '6'){
				LCD_write_command(SHIFT_RIGHT);
				while(keypad_read() == 6);
			}

			else if(Key_Pressed == '4'){
				LCD_write_command(SHIFT_LEFT);
				while(keypad_read() == 4);
			}
			
			while(keypad_read() != 200){}
		}
	
	}
}

