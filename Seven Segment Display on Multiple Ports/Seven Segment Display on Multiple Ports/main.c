/*
 * Seven Segment Display on Multiple Ports.c
 *
 * Created: 01-10-2022 12:40:27 PM
 * Author : kartik.iot
 */ 

#include <avr/io.h>
#define F_CPU 8000000UL
#include <util/delay.h>

int main(void)
{
	DDRD = 0b01111111; // PD7 as INPUT, PD6 to PD0 as output
	DDRC = 0b01111111; // PC7 as INPUT, PC6 to PC0 as output	
	while (1)
	{
		//PORTx = 0b0gfedcba;
		PORTC = 0b00111111;// for number 0
		PORTD = 0b01000000;// for number 0
		_delay_ms(1000);
		PORTC = 0b00000110;// for number 1
		PORTD = 0b01111001;// for number 1
		_delay_ms(1000);
		PORTC = 0b01011011;// for number 2
		PORTD = 0b00100100;// for number 2
		_delay_ms(1000);
		PORTC = 0b01001111;// for number 3
		PORTD = 0b00110000;// for number 3
		_delay_ms(1000);
		PORTC = 0b01100110;// for number 4
		PORTD = 0b00011001;// for number 4
		_delay_ms(1000);
		PORTC = 0b01101101;// for number 5
		PORTD = 0b00010010;// for number 5
		_delay_ms(1000);
		PORTC = 0b01111101;// for number 6
		PORTD = 0b00000010;// for number 6
		_delay_ms(1000);
		PORTC = 0b00000111;// for number 7
		PORTD = 0b01111000;// for number 7
		_delay_ms(1000);
		PORTC = 0b01111111;// for number 8
		PORTD = 0b00000000;// for number 8
		_delay_ms(1000);
		PORTC = 0b01101111;// for number 9
		PORTD = 0b00010000;// for number 9
		_delay_ms(1000);
	}
}
