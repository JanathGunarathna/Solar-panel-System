/*
 * StepperMotor.c
 */ 

#include "StepperMotor.h"

void StepperMotor_Initialize(){
	DDRC=0XFF;
}

void rotate()
{
	PORTC=0x08;
	_delay_ms(1000);
	PORTC=0x04;
	_delay_ms(1000);
	PORTC=0x02;
	_delay_ms(1000);
	PORTC=0x01;
	_delay_ms(1000);
	
}

void rotateccw()
{
	PORTC=0x10;
	_delay_ms(1000);
	PORTC=0x20;
	_delay_ms(1000);
	PORTC=0x40;
	_delay_ms(1000);
	PORTC=0x80;
	_delay_ms(1000);
	
}

void rotatecw()
{
	PORTC=0x80;
	_delay_ms(1000);
	PORTC=0x40;
	_delay_ms(1000);
	PORTC=0x20;
	_delay_ms(1000);
	PORTC=0x10;
	_delay_ms(1000);
	
}

