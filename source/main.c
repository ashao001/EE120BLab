/*
 *  Partner(s) Name: 
 *	Lab Section:
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
    while (1) {
	PORTB = 0xF0;
    }
    return 1;
}
