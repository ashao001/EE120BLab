/*
 *  Partner(s) Name: none
 *	Lab Section: 023
 *	Assignment:Lab #2  Exercise #3
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
     
     DDRC = 0xFF; //CONFIGURE 8 PINS AS OUPUT
     PORTC = 0X00;  //INITIALIZE
     DDRA = 0x00; //input
     PORTA = 0xFF;
    /* Insert your solution below */
     unsigned char tempA, tempB, tempC, tempD, cntavail;
     cntavail = 0;

    while (1) {
	//cntavail = 0;
	tempA = PINA & 0x01;
	tempB = PINA & 0x02;
	tempC = PINA & 0x04;
	tempD = PINA & 0x08;
	if(tempA == 0x01){
		cntavail = cntavail + 1;
		
}
	if(tempB == 0x02){
                cntavail = cntavail + 1;
	
}
	if(tempC == 0x04){
                cntavail = cntavail + 1;
}
	if(tempD == 0x08){
                cntavail = cntavail + 1;

}
	
	if (4 - cntavail == 0){
		PORTC = PORTC | 0x80;
		PORTC = PORTC & 0X80;
} 
	else if(4 - cntavail == 1){
		PORTC = PORTC | 0x01;
		PORTC = PORTC & 0X01;
}
	else if(4 - cntavail == 2){
                PORTC = PORTC | 0x02;
                PORTC = PORTC & 0X02;
}
	else if(4 - cntavail == 3){
                PORTC = PORTC | 0x03;
                PORTC = PORTC & 0X03;
}
	else if(4 - cntavail == 4){
                PORTC = PORTC | 0x04;
                PORTC = PORTC & 0X04;
}
	cntavail = 0;
    }

    return 1;
}
