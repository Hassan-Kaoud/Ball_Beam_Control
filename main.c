#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_interface.h"

#include "UART_interface.h"
#include "CLCD_interface.h"
#include "Servo.h"
#include <util/delay.h>




int main(void)
{
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
	}
}
