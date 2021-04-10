#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
	PINA; PINB; PINC;
        DDRA = 0x00; PORTA = PINA;
	DDRB = 0xFF; PORTB = PINB;
        PORTC = PINC; PORTD = 0x00;
        unsigned int bruh = 0x00;
	
      
        	while(1){

                 if( (PORTA >= 0x8C) || (PORTB >= 0x8C) || (PORTC >= 0x8C)  ) {
                 PORTD = 0x01;
                 }

	         if ( PORTA - PORTC > 0x50){
		 PORTD = 0x10;
                 }

		 if ( ((PORTA >= 0x8C) || (PORTB >= 0x8C) || (PORTC >= 0x8C)) && (PORTA - PORTC > 0x50)){  
                 PORTD = 0x11;
		 }
               
		 

		 }
	         
		 bruh = PORTA + PORTB + PORTC;
		
		 PORTD = bruh;
                 return 0;
                 }
