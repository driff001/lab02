#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
	
        PORTD = 0x00;
        unsigned int tempA = 0x00;
	unsigned int tempB = 0x00;
	int minus;
	
      
        	while(1){
		 tempB = 0;
		 tempA = 0;
		 minus = 0;
		 
		 minus = PINA - PINC;	
		
		 if ( ((PINA+PINB+PINC) > 0x8C) && (minus > 0x50) && (PINA > PINC) ){  
                 tempB = 0x11;
		 }
		 else if ( ((PINA+PINB+PINC) > 0x8C) && (minus > 0x50) && (PINA < PINC) ){  
                 tempB = 0x10;
		 }
                 else if( ((PINA+PINB+PINC) > 0x8C)  ) {
                 tempB = 0x01;
                 }

	         else if ( (minus > 0x50)  && (PINA > PINC)){
		 tempB = 0x10;
                 }
		 else if ( (minus > 0x50)  && (PINA < PINC) ) {
		 tempB = 0x00;
                 }
		
               	 tempA = PINA + PINB + PINC;
		 tempA = tempA >> 2;
		 tempA = tempA | tempB;
		 PORTD = tempA;	
		 }
	         
		 
	
                 return 0;
                 }
