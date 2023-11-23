
#include "LCD.h"
#include "EEPROM.h"
#include "LCD_cfg.h"

/*Q1.Display a counter on LCD that count from 0 to 255 every 1 second,
 try to turn off the board during the counting of counter then turn
 the board on and make sure that it will continue its count*/

int main(){
	uint8_t x = EEPROM_read(460);
	
	if(x >= 255){								//Making sure that the address doesn't hold x = 255//
		x = 0;
	}
		LCD_init();								//LCD Configurations//
		
	while(1){
		
		LCD_write_command(FIRST_LINE(0));		//Always write on LCD at first location first line//
		LCD_write_num(x);						//Print the number
		x++;									//Increment the number
		EEPROM_write(460, x);					//Store or write the data in the address given
		_delay_ms(200);
		
		if(x == 255){							//If the x == 255 reset x and clear the LCD
			LCD_write_command(CLEAR_DISPLAY);	//Clear the LCD//
			x = 0;								//Start from 0 after reaching the maximum (255)//
		}
	}
}