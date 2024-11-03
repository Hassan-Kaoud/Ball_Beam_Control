#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_interface.h"

#include "UART_interface.h"
#include "CLCD_interface.h"
#include "sevrvo.h"
#include <util/delay.h>




int main(void)
{
	DIO_voidSetPinDirection(PORT_u8B,PIN_3,PIN_OUT);
	Timer1_Init();
	while(1)
	{
		Set_Servo_Angle(90); // Set servo angle to 90 degrees
			_delay_ms(1000);
			Set_Servo_Angle(0);  // Set servo angle to 0 degrees
			_delay_ms(1000);
	}
}
