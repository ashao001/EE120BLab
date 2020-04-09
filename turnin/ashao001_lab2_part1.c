/*
 *  Partner(s) Name: none
 *	Lab Section: 023
 *	Assignment:Lab #2  Exercise #1
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
     
     DDRB = 0xFF; //CONFIGURE 8 PINS AS OUPUT
     PORTB = 0X00;  //INITIALIZE
     DDRA = 0x00; //input
     PORTA = 0xFF;
    /* Insert your solution below */
     unsigned char tempA, tempB;
    while (1) {
	tempA = PINA & 0x03;
	tempB = 0x00;
	if(tempA == 0x01){
		tempB = tempB | 0x01;
}
	PORTB = tempB;
    }
    return 1;
}
