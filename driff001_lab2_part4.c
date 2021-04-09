#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
        DDRA = 0x00; PORTA = 0xFF;

	DDRB = 0xFF; PORTB = 0x00;
        PORTC = 0x00; PORTD = 0x00;
        unsigned int bruh = 0x00;
      
      
        

                 if( (PORTA >= 0x8C) || (PORTB >= 0x8C) || (PORTC >= 0x8C)  ) {
                 PORTD = 0x01;
                 }

	         if ( PORTA - PORTC > 0x50){
		 PORTD = 0x10;
                 }

		 if ( ((PORTA >= 0x8C) || (PORTB >= 0x8C) || (PORTC >= 0x8C)) && (PORTA - PORTC > 0x50)){  
                 PORTD = 0x11;
		 }
               
		 bruh = PORTA + PORTB + PORTC;
		 PORTD = bruh | PORTD;
	         
		 


                 return 0;
                 }
