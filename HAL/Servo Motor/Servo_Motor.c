/*
 * Servo_Motor.c
 *
 * Created: 02/11/2024 3:35:21 pm
 *  Author: Mohamed
 */



#include "Servo_Motor.h"

// Function to initialize Timer1 for PWM
void Timer1_Init() {
	// Set Fast PWM mode using ICR1 as TOP
	TCCR1A = (1 << WGM11) | (1 << COM1A1);
	TCCR1B = (1 << WGM13) | (1 << WGM12) | (1 << CS11);

	// Set TOP value for 50Hz PWM frequency
	ICR1 = 20000; // 20ms period (50Hz)

	// Set PD5 (OC1A) as output
	DDRD |= (1 << PD5);
}

// Function to set the angle of the servo (0-180 degrees)
void Set_Servo_Angle(uint8_t angle) {

	void Timer1_Init();

	// Calculate duty cycle value for the given angle
	uint16_t duty_cycle = ((angle * 10) + 750); // 1ms to 2ms pulse width

	// Set duty cycle for the given angle
	OCR1A = duty_cycle;
}
