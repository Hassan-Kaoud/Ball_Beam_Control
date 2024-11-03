#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_interface.h"

#include "UART_interface.h"
#include "CLCD_interface.h"
<<<<<<< HEAD
#include "sevrvo.h"
=======
#include "Servo.h"
>>>>>>> 1372b78cc79d5e1be29907a60bd818f15acc2acb
#include <util/delay.h>




int main(void)
{
<<<<<<< HEAD
	DIO_voidSetPinDirection(PORT_u8B,PIN_3,PIN_OUT);
	Timer1_Init();
	while(1)
	{
		Set_Servo_Angle(90); // Set servo angle to 90 degrees
			_delay_ms(1000);
			Set_Servo_Angle(0);  // Set servo angle to 0 degrees
			_delay_ms(1000);
=======
	float x=0;
	DIO_voidSetPortDirection(PORT_u8D,PORT_OUT);
Timer1_Init();
int i =0;
	while(1)
	{
// US_voidGetDistance(PORT_u8A,PIN_0,x);
// i=(int)x;
		Set_Servo_Angle(i);
		i++;
		_delay_ms(1000);
>>>>>>> 1372b78cc79d5e1be29907a60bd818f15acc2acb
	}
}
