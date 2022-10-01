/*
 * Basics of Microcontroller.c
 *
 * Created: 10-09-2022 12:27:12 PM
 * Author : kartik.iot
 */ 

#include <avr/io.h>

int main(void)
{
	// PA    76543210
	DDRA = 0b11111111;// I setup all Pins on PORTA as OUTPUT
	while (1)
	{
		PORTA = 0b11001100;// I Setup PA7,6,3,2 as +5V and PA5,4,1,0 as 0V
		for (long i = 0; i < 100000; i = i + 1)
		{		};
		PORTA = 0b00110011;
		for (long i = 0; i < 100000; i = i + 1)
		{		};
	}
}

