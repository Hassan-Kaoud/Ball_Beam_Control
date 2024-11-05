/*
 * main.c
 *
 *  Created on: Dec 13, 2023
 *      Author: Mohamed
 */
#include "Commons/MCU.h"
#include "Commons/Macros.h"
#include "Commons/STD_Types.h"

#include "MCAL/DIO/DIO.h"
#include "MCAL/UART/UART.h"
#include "HAL/Ultrasonic Sensor/Ultrasonic_Sensor.h"

#include "HAL/LCD/LCD.h"
#include "HAL/Servo Motor/Servo_Motor.h"
#include <util/delay.h>

// PID constants
float kp = 8.0;
float ki = 0.2;
float kd = 3100.0;
float distance_setpoint = 21.0;

// PID variables
float distance_previous_error = 0.0;
float PID_p, PID_i, PID_d, PID_total;
u8 i =0;

int main(void) {
    HAL_LCD_u8LCDInit();

    HAL_Ultrasonic_Sensor_voidInit();
    MCAL_DIO_u8SetPinDirection(PortD,5,Pin_High);
    //MCAL_DIO_u8SetPinDirection(PORTD, Pin5 Pin_High);

    f32 dis = 0.0;

    Timer1_Init();
HAL_LCD_u8Clear();
    while (1) {
//
//    	HAL_LCD_u8Clear();
//    	HAL_Ultrasonic_Sensor_voidCalcDistancse(&dis);
//        //HAL_Ultrasonic_Sensor_voidCalcDistance(&dis);
//
//        float distance_error = distance_setpoint - dis;
//
//        PID_p = kp * distance_error;
//
//        if (-3 < distance_error && distance_error < 5) {
//            PID_i += ki * distance_error;
//        } else {
//            PID_i = 0;
//        }
//
//        PID_d = kd * ((distance_error - distance_previous_error)/50);
//
//        PID_total = PID_p + PID_i + PID_d;
//        if (PID_total < 20) {
//            PID_total = 20;
//        } else if (PID_total > 160) {
//            PID_total = 160;
//        }
//
//        Set_Servo_Angle((u16)PID_total);
//
//        distance_previous_error = distance_error;
//
//        HAL_LCD_u8SendNumber((u16)dis);
//
//        _delay_ms(50);
//
//        Set_Servo_Angle(90);
//        _delay_ms(100);
        Set_Servo_Angle(90);
//    	  Set_Servo_Angle(i);
//    	  i++;
//    	  if(i==180)
//    	  {
//    		  i=0;
//    	  }
//    	  _delay_ms(30);
    }
}
