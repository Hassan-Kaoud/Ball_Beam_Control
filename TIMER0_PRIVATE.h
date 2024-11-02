/****************************************************/
/********** SWC : DIO *******************************/
/********** Date : 13 August 2024 *******************/
/********** Author : Yousef Ahmad *******************/
/********** Version :1.0          *******************/

#ifndef TIMER0_PRIVATE_H_
#define TIMER0_PRIVATE_H_


#define TCCR0 	*((volatile u8*)0x53)
#define TCCR0_WGM00     6
#define TCCR0_WGM01     3
#define TCCR0_COM00     4
#define TCCR0_COM00     5

#define TCNT0 	*((volatile u8*)0x54)



#define OCR0 	*((volatile u8*)0x5c)



#define TIMSK 	*((volatile u8*)0x59)
#define TIMSK_TOIE0  0
#define TIMSK_OCIE0  1

#define  OVF_MODE  1
#define  CTCMODE  2

#define NO_DIV  1
#define DIV_8   2
#define DIV_64  3
#define DIV_256  4
#define DIV_1024  5

#endif
