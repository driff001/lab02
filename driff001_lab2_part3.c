#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
        DDRA = 0x00; PORTA = 0xFF;

	DDRB = 0xFF; PORTB = 0x00;
        PORTC = 0x00;
        unsigned char tmpB= 0x00;
        unsigned char tmpA = 0x00;
        unsigned char tmpD = 0x00;
        unsigned char tmpC = 0x00;
        unsigned char cntavail;
        while(1) {
        cntavail = 0x00;

        tmpA = PINA & 0x01;
        tmpB = PINA & 0x02;
        tmpC = PINA & 0x04;
        tmpD = PINA & 0x08;
        


                 if(tmpA != 0x01) {
                 cntavail = cntavail + 1;
                 }

	         if(tmpB != 0x02)  {
                 cntavail = cntavail + 1;
                 }
                 if(tmpC != 0x04){
                 cntavail = cntavail + 1;
                 }
                 if(tmpD != 0x08){
                 cntavail = cntavail + 1;
                 }
		 
                

                PORTC = cntavail;
		if ( cntavail == 0x00){
                PORTC = PORTC | 0x80;
                }

                                                               }
               


                 return 0;
                 }
                                
