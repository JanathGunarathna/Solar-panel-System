/*
 * StepperMotor.h
 */ 

#ifndef STEPPERMOTOR_H_
#define STEPPERMOTOR_H_

#define F_CPU 8000000UL
#include <avr/io.h>
#include <avr/interrupt.h>
#include <stdio.h>
#include <util/delay.h>
#include <stdlib.h>

void StepperMotor_Initialize();

void rotate();

void rotateccw();

void rotatecw();

#endif /* STEPPERMOTOR_H_ */
