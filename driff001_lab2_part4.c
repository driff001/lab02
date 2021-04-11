#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
	
        PORTD = 0x00;
        unsigned int tempA = 0x00;
	unsigned int tempB = 0x00;
	
	
      
        	while(1){
		 tempB = 0;
		 tempA = 0;
		 
		 
		 	
		 if( ((PINA+PINB+PINC) > 0x8C)  ) {
                 tempB = 0b01;
                 }
		 if ( (PINA-PINC > 0x50)  && (PINA > PINC)){
		 tempB = 0b10;
                 }
	         if ( (PINA-PINC > 0x50)  && (PINA < PINC) ) {
		 tempB = 0b00;
                 }
		 if ( ((PINA+PINB+PINC) > 0x8C) && (PINA - PINC > 0x50) && (PINA > PINC) ){  
                 tempB = 0b11;
		 }
		 if ( ((PINA+PINB+PINC) > 0x8C) && (PINA - PINC > 0x50) && (PINA < PINC) ){  
                 tempB = 0b10;
		 }
                

	        
		
		
               	 tempA = PINA + PINB + PINC;
		 tempA = tempA >> 2;
		 tempA = tempA | tempB;
		 PORTD = tempA;	
		 }
	         
		 
	
                 return 0;
                 }
