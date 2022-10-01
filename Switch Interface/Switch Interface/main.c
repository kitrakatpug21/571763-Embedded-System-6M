/*
 * Switch Interface.c
 *
 * Created: 18-09-2022 03:13:54 PM
 * Author : kartik.iot
 */ 

#include <avr/io.h>
#define F_CPU 8000000UL
#include <util/delay.h>

void turnLeft()
{	
	for (int repeat = 0; repeat < 3; repeat = repeat + 1)
	{
		// Right to Left
		PORTC = 0b00000000;
		_delay_ms(50);
		// For Up to Down
		for (int i = 0; i <= 7; i = i+1)
		{
			PORTC = PORTC | (1<<i);
			_delay_ms(50);
		}
		PORTC = 0b11111111;
		_delay_ms(50);
		for (int i = 0; i <= 7; i = i+1)
		{
			PORTC = PORTC & ~(1<<i);
			_delay_ms(50);
		}
	}
}
////////// REVERSED Direction /////////////////////
void turnRight()
{
	for (int repeat = 0; repeat < 3; repeat = repeat + 1)
	{
		// Left to Right
		PORTC = 0b00000000;
		_delay_ms(200);
		// For Up to Down
		for (int i = 7; i >= 0; i = i-1)
		{
			PORTC = PORTC | (1<<i);
			_delay_ms(50);
		}
		PORTC = 0b11111111;
		_delay_ms(50);
		for (int i = 7; i >= 0; i = i-1)
		{
			PORTC = PORTC & ~(1<<i);
			_delay_ms(50);
		}
	}
}

int main(void)
{
    DDRA = 0b11111111; // PORTA is OUTPUT for LEDs
	DDRC = 0b00000000; // PORTC is an Input Port for Switch
	while (1) 
    {
		//PORTA = (PINC == 8) ? 0b11111111 : 0b00000000;
		
		if (PINC == 136)
		{
			PORTA = 0b11111111;
			_delay_ms(100);
			PORTA = 0b00000000;
			_delay_ms(100);
		}
		else if (PINC == 128)
		{
			PORTA = 0b11110000;
			_delay_ms(100);
			PORTA = 0b11111111;
			_delay_ms(100);
		}
		else if (PINC == 8)
		{
			PORTA = 0b00001111;
			_delay_ms(100);
			PORTA = 0b11111111;
			_delay_ms(100);
		}
		else
		{
			PORTA = 0b11111111;
		}
    }
}

