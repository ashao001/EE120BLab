/*
 *  Partner(s) Name: none
 *	Lab Section: 023
 *	Assignment:Lab #2  Exercise #4
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
     
     DDRD = 0xFF; //CONFIGURE 8 PINS AS OUPUT
     PORTD = 0X00;  //INITIALIZE
     DDRA = 0x00; //input
     PORTA = 0xFF;
     DDRB = 0x00; //input
     PORTB = 0xFF;
     DDRC = 0x00; //input
     PORTC = 0xFF;
    /* Insert your solution below */
     unsigned char max, difference;
     max = 140;
    // difference = PINA - PINB;

    while (1) {
	//cntavail = 0;
	//tempA = PINA & 0x01;
	//tempB = PINA & 0x02;
	//tempC = PINA & 0x04;
	//tempD = PINA & 0x08;
	int total;                                                                                                                                                                                                         total = PINA + PINB + PINC;
        difference = PINA - PINC;
 	PORTD = total; 
	
	if((PORTD < 64) && (PINA + PINB + PINC >= max) && (difference >= 80) ){
	PORTD = PORTD <<2;
}
	else if((PORTD < 64) && ((PINA + PINB + PINC >= max) || (difference >= 80)) ){
	PORTD = PORTD <<1;
}
	if(PINA + PINB + PINC >= max){
		PORTD =PORTD |  0x01;
		
}
	if(difference >= 80){
                PORTD = PORTD | 0x02;
}
	total = 0;
	difference = 0;
    }

    return 1;
}
