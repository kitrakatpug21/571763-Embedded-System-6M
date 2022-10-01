/*
 * OPerators_on_LED.c
 *
 * Created: 17-09-2022 02:41:13 PM
 * Author : kartik.iot
 */ 

#include <avr/io.h>
#define F_CPU 8000000UL
#include <util/delay.h>

void curtainInwards()
{
	PORTC = 0b10000001; // here only PC7 is at +5V rest at 0V
	_delay_ms(100);
	PORTC = 0b01000010; // here only PC6 is at +5V rest at 0V
	_delay_ms(100);
	PORTC = 0b00100100; // here only PC5 is at +5V rest at 0V
	_delay_ms(100);
	PORTC = 0b00011000; // here only PC4 is at +5V rest at 0V
	_delay_ms(100);
	PORTC = 0b00000000; // here only PC4 is at +5V rest at 0V
	_delay_ms(100);
}
void curtainOutwards()
{
	PORTC = 0b00011000; // here only PC3 is at +5V rest at 0V
	_delay_ms(100);
	PORTC = 0b00100100; // here only PC2 is at +5V rest at 0V
	_delay_ms(100);
	PORTC = 0b01000010; // here only PC1 is at +5V rest at 0V
	_delay_ms(100);
	PORTC = 0b10000001; // here only PC0 is at +5V rest at 0V
	_delay_ms(100);
	PORTC = 0b00000000;
	_delay_ms(100);
}

int main(void)
{
	DDRC = 0b11111111; // PORTC declared as output
	//BITWISE OPS
	/*
	& - > 
	| - > 
	~
	^	
	*/
    while (1) 
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
////////// REVERSED Direction /////////////////////
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
		
		
// 		// For Down to Up
// 		for (int i = 7; i >= 0; i = i-1)
// 		{
// 			PORTC = (1<<i);
// 			_delay_ms(200);
// 		}
		
    }
}

/*
PORTC = 0b00000000;
_delay_ms(500);
//PORTC = 0b00000001;
PORTC = (0b00000001 << 0);
_delay_ms(500);
//PORTC = 0b00000010;
PORTC = (0b00000001 << 1);
_delay_ms(500);
//PORTC = 0b00000100;
PORTC = (0b00000001 << 2);
_delay_ms(500);
//PORTC = 0b00001000;
PORTC = (0b00000001 << 3);
_delay_ms(500);
PORTC = (0b00000001 << 4);
_delay_ms(500);
PORTC = (0b00000001 << 5);
_delay_ms(500);
PORTC = (0b00000001 << 6);
_delay_ms(500);
PORTC = (0b00000001 << 7);
_delay_ms(500);
				
		
PORTC = 0b00000000; // ALL LEDs off
_delay_ms(500);
PORTC = 0b00000000 + 1;
_delay_ms(500);
PORTC = PORTC + 1;
//PORTC = 0b00000000 + 2;
_delay_ms(500);
PORTC = PORTC + 1;
//PORTC = 0b00000000 + 3;
_delay_ms(500);
PORTC = PORTC + 1;
//PORTC = 0b00000000 + 4;
_delay_ms(500);
PORTC = PORTC + 1;
//PORTC = 0b00000000 + 5;
_delay_ms(500);
PORTC = PORTC + 1;
//PORTC = 0b00000000 + 6;
_delay_ms(500);
PORTC = PORTC + 1;
//PORTC = 0b00000000 + 7;
_delay_ms(500);
*/
