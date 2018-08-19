#define F_CPU 16000000UL

#include "oled.h"
#include <avr/io.h>

#include <util/delay.h>

int main()
{
	

	sei();
	OLED oled;
	uint8_t fb[1024] = {0};
	OLED_init(&oled, 128, 64, fb, 400000, 0b0111100);
        
        char str[]={"hello"};
        char *ptr = str; 
        uint8_t start_x = 44;
        uint8_t start_y = 22;  
        OLED_put_string(&oled, ptr, sizeof(str)/sizeof(str[0]), start_x, start_y, true);
        OLED_refresh(&oled);
        
        OLED_put_letter(&oled, 'H', 0, 5, false);
        OLED_put_letter(&oled, 'e', 8, 10, false);
        OLED_put_letter(&oled, 'l', 16, 15, false);
        OLED_put_letter(&oled, 'l', 24, 20, false);
        OLED_put_letter(&oled, 'o', 32, 25, false);
        OLED_refresh(&oled);
		
	while (1) {	
        }
             
}