/*	Author: talva009
 *  Partner(s) Name: 
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
 /* Insert DDR and PORT initializations */
        DDRD = 0x00; PORTD = 0x00;
    	DDRB = 0xFE; PORTB = 0x00;
    /* Insert your solution below */

	while(1){
		if((PIND + PINB) >= 70){
			PORTB = PORTB | 0x02;
		}	
		else if((PIND + PINB) > 5){
			PORTB = PORTB | 0X04;
			PORTB = PORTB & 0xFC;
		}
	

		
	

	}
	
	return 1;
}
