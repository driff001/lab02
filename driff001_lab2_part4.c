#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
	
        DDRA = 0x00; 
	DDRB = 0xFF; PORTD = 0x00;
        unsigned int tempA = 0x00;
	unsigned int tempB = 0x00;
	
      
        	while(1){
		 tempB = 0;
		 tempA = 0;

                 if( (PINA >= 0x8C) || (PINB >= 0x8C) || (PINC >= 0x8C)  ) {
                 tempB = 0x01;
                 }

	         if ( PINA - PINC > 0x50){
		 tempB = 0x10;
                 }

		 if ( ((PINA >= 0x8C) || (PINB >= 0x8C) || (PINC >= 0x8C)) && (PINA - PINC > 0x50)){  
                 tempB = 0x11;
		 }
               	 tempA = PINA + PINB + PINC;
		 tempA = tempA & 0b11111100;
		 tempA = tempA | tempB;
		 PORTD = tempA;	
		 }
	         
		 
		
		 PORTD = bruh | PORTD;
                 return 0;
                 }
