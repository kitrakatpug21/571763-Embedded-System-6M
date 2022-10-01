/*
 * Operators on LED.c
 *
 * Created: 11-09-2022 03:38:23 PM
 * Author : kartik.iot
 */ 

#include <avr/io.h>


int main(void)
{
    // PA    76543210
    DDRA = 0b11111111;// I setup all Pins on PORTA as OUTPUT
    while (1)
    {
		PORTA = 0b00000000;
		for (long i = 0; i < 25000; i = i + 1)
		{}
		for (int led = 0; led <= 7; led = led + 1)
		{
			PORTA = (0b10000000 >> led);
			for (long i = 0; i < 25000; i = i + 1)
			{}
		}
		/*PORTA = 0b00000001;
		for (long i = 0; i < 25000; i = i + 1)
		{}
		PORTA = 0b00000010;
		for (long i = 0; i < 25000; i = i + 1)
		{}
		PORTA = 0b00000100;
		for (long i = 0; i < 25000; i = i + 1)
		{}
		PORTA = 0b00001000;
		for (long i = 0; i < 25000; i = i + 1)
		{}
		PORTA = 0b00010000;
		for (long i = 0; i < 25000; i = i + 1)
		{}
		PORTA = 0b00100000;
		for (long i = 0; i < 25000; i = i + 1)
		{}
		PORTA = 0b01000000;
		for (long i = 0; i < 25000; i = i + 1)
		{}
		PORTA = 0b10000000;
		for (long i = 0; i < 25000; i = i + 1)
		{}
		PORTA = 0b00000000;
		for (long i = 0; i < 25000; i = i + 1)
		{}*/
	
		
		/*
		for (int count = 0; count <= 255; count = count + 1)
		{
			PORTA = count;
			for (long i = 0; i < 25000; i = i + 1)
			{}
		}
		for (int count = 255; count >= 0; count = count - 1)
		{
			PORTA = count;
			for (long i = 0; i < 25000; i = i + 1)
			{}
		}*/
	}
}

