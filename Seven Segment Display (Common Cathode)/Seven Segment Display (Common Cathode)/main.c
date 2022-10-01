/*
 * Seven Segment Display (Common Cathode).c
 *
 * Created: 01-10-2022 12:10:20 PM
 * Author : kartik.iot
 */ 

#include <avr/io.h>
#define F_CPU 8000000UL
#include <util/delay.h>

int main(void)
{
    DDRC = 0b01111111; // PC7 as INPUT, PC6 to PC0 as output
    while (1) 
    {
		//PORTC = 0b0gfedcba;
		  PORTC = 0b00111111;// for number 0
		  _delay_ms(1000);
		  PORTC = 0b00000110;// for number 1
		  _delay_ms(1000);
		  PORTC = 0b01011011;// for number 2
		  _delay_ms(1000);
		  PORTC = 0b01001111;// for number 3
		  _delay_ms(1000);
		  PORTC = 0b01100110;// for number 4
		  _delay_ms(1000);
		  PORTC = 0b01101101;// for number 5
		  _delay_ms(1000);
		  PORTC = 0b01111101;// for number 6
		  _delay_ms(1000);
		  PORTC = 0b00000111;// for number 7
		  _delay_ms(1000);
		  PORTC = 0b01111111;// for number 8
		  _delay_ms(1000);
		  PORTC = 0b01101111;// for number 9
		  _delay_ms(1000);
    }
}

