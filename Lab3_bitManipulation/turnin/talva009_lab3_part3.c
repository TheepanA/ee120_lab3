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
        DDRA = 0x00; PORTA = 0xFF;
        DDRC = 0XFF; PORTC = 0X00;
    /* Insert your solution below */

	while(1){

	if((PINA & 0x0F) == 0x01 || (PINA & 0x0F) == 0x02){
		PORTC = 0x60;
	}
        else if((PINA & 0x0F) == 0x03 || (PINA & 0x0F) == 0x04){
		PORTC = 0x70;
        }
        else if((PINA & 0x0F) == 0x05 || (PINA & 0x0F)== 0x06){
		PORTC = 0x38;
        }
        else if((PINA & 0x0F) == 0x07 || (PINA & 0x0F) == 0x08 || (PINA & 0x0F) == 0x09){
		PORTC = 0x3C;
        }
        else if((PINA & 0x0F) == 0x0A || (PINA & 0x0F) == 0x0B || (PINA & 0x0F) == 0x0C){
		PORTC = 0x3E;
        }
        else if((PINA & 0x0F) == 0x0D || (PINA & 0x0F) == 0x0E || (PINA & 0x0F) == 0x0F){
		PORTC = 0x3F;
        }

	if((PINA & 0xF0) == 0x30){
		PORTC = PORTC | 0x80;
	}

    }
    return 1;
}
