/*
 * Servo_Motor.h
 *
 * Created: 02/11/2024 3:35:49 pm
 *  Author: Mohamed
 */


#ifndef SERVO_MOTOR_H_
#define SERVO_MOTOR_H_

#include <avr/io.h>
#include <util/delay.h>

void Set_Servo_Angle(uint8_t angle);
void Timer1_Init();


#endif /* SERVO_MOTOR_H_ */
