#define F_CPU 16000000UL

#include "oled.h"
#include <avr/io.h>


int main()
{
	

	sei();
	OLED oled;
	uint8_t fb[1024] = {0};
	OLED_init(&oled, 128, 64, fb, 400000, 0b0111100);
        
       
	      
        OLED_put_letter(&oled, 'H', 0, 5, false);
        OLED_put_letter(&oled, 'e', 8, 5, false);
        OLED_put_letter(&oled, 'l', 16, 5, false);
        OLED_put_letter(&oled, 'l', 24, 5, false);
        OLED_put_letter(&oled, 'o', 32, 5, false);
         
        OLED_put_letter(&oled, 'H', 40, 5, true);
        OLED_put_letter(&oled, 'e', 48, 5, true);
        OLED_put_letter(&oled, 'l', 56, 5, true);
        OLED_put_letter(&oled, 'l', 64, 5, true);
        OLED_put_letter(&oled, 'o', 72, 5, true);   
        OLED_put_letter(&oled, '!', 80, 5, true); 

        OLED_refresh(&oled);
        char str[]={"hellow it is test! 1234 @ 5678 # 90 $ % ^ & *()_=+- "};
        char *ptr = str;    
        OLED_put_string(&oled, ptr, sizeof(str)/sizeof(str[0]), 0, 0, false);
        OLED_refresh(&oled);
       
		
	while (1) {	
	}
}