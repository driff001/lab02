/*	Author: driff001
 *  Partner(s) Name: Jo Smith
 *	Lab Section:
 *	Assignment: Lab #  Exercise #
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
        DDRA = 0x00; PORTA = 0xFF; // Configure port A's 8 pins as inputs
	DDRB = 0xFF; PORTB = 0x00; // Configure port B's 8 pins as outputs, initialize to 0s
	unsigned char tmpB = 0x00; // Temporary variable to hold the value of B
	unsigned char tmpA = 0x00; // Temporary variable to hold the value of A
        while(1) {
		// 1) Read input
	tmpA = PINA & 0x01;
		// 				// 2) Perform computation
	//if PA0 is 1, set PB1PB0 = 01, else = 10
	         if (tmpA == 0x01) {   		                                                 tmpB = (tmpB & 0xFC) | 0x01; // Sets tmpB to bbbbbb01		// 																		 // (clear rightmost 2 bits, then set to 01)
		} else {		 							tmpB = (tmpB & 0xFC) | 0x02; // Sets tmpB to bbbbbb10
                }
		 																		 												// 3) Write output
		PORTB = tmpB;	
		}
		return 0;
		//

}
