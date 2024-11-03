/*
 * Servo.h
 *
 *  Created on: Nov 2, 2024
 *      Author: DELL
 */

#ifndef SERVO_H_
#define SERVO_H_

#include <avr/io.h>
#include <util/delay.h>

void Set_Servo_Angle(uint8_t angle);
void Timer1_Init();

#endif /* SERVO_H_ */
