#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
	
        DDRA = 0x00; 
	DDRB = 0xFF; PORTD = 0x00;
        unsigned int bruh = 0x00;
	
      
        	while(1){

                 if( (PINA >= 0x8C) || (PINB >= 0x8C) || (PINC >= 0x8C)  ) {
                 PORTD = 0x01;
                 }

	         if ( PINA - PINC > 0x50){
		 PORTD = 0x10;
                 }

		 if ( ((PINA >= 0x8C) || (PINB >= 0x8C) || (PINC >= 0x8C)) && (PINA - PINC > 0x50)){  
                 PORTD = 0x11;
		 }
               
		 
		 
		 }
	         
		 bruh = PINA + PINB + PINC;
		
		 PORTD = bruh | PORTD;
                 return 0;
                 }
