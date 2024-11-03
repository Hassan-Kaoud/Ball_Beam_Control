/****************************************************/
/********** SWC : DIO *******************************/
/********** Date : 13 August 2024 *******************/
/********** Author : Yousef Ahmad *******************/
/********** Version :1.0          *******************/


#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "TIMER0_interface.h"
#include "TIMER0_config.h"
#include "TIMER0_private.h"
static void (*GlobalPtrFuncOVF)(void)=NULL;
static void (*GlobalPtrFuncCMP)(void)=NULL;
//void TIMER0_voidINIT(void)
//{
//	// CTC OR OVF
//#if TIMER_MODE==OVF_MODE
//	CLR_BIT(TCCR0,TCCR0_WGM00);
//	CLR_BIT(TCCR0,TCCR0_WGM01);
//#elif TIMER_MODE==CTCMODE
//
//	CLR_BIT(TCCR0,TCCR0_WGM00);
//	SET_BIT(TCCR0,TCCR0_WGM01);
//#else
//#error("Wrong Mode")
//#endif
//
//
//	//ENABLE INT _>MODE
//
//#if INT_SRC==OVF_MODE
//	SET_BIT(TIMSK,TIMSK_TOIE0);
//#elif  INT_SRC==CTCMODE
//	SET_BIT(TIMSK,TIMSK_OCIE0);
//#else
//#error("wrong mode")
//	//PreSCALER
//#endif
//#if PRE_SCALER ==NO_DIV
//	TCCR0&=0b11111000;
//	TCCR0|=NO_DIV;
//#elif PRE_SCALER ==DIV_8
//	TCCR0&=0b11111000;
//	TCCR0|=DIV_8;
//#elif PRE_SCALER ==DIV_64
//	TCCR0&=0b11111000;
//	TCCR0|=DIV_64;
//#elif PRE_SCALER ==DIV_256
//	TCCR0&=0b11111000;
//	TCCR0|=DIV_256;
//#elif PRE_SCALER ==DIV_1024
//	TCCR0&=0b11111000;
//	TCCR0|=DIV_1024;
//#else
//#error("wrong")
//#endif
//}
//void TIMER0_voidPreLoadValue(u8 Copy_u8Ticks)
//{
//	TCNT0=Copy_u8Ticks;
//}
//
//void TIMER0_voidSetCmpValue(u8 Copy_u8Ticks)
//{
//	OCR0=Copy_u8Ticks;
//}
//Std_err_e TIMER0_e_setCallBackOVF(void(*Pfunc)(void)){
//	Std_err_e Local_e_error_states =OK;
//	if(Pfunc!=NULL){
//
//		GlobalPtrFuncOVF=Pfunc;
//	}
//	else
//	{
//
//		Local_e_error_states=NOK;
//	}
//
//
//	return Local_e_error_states;
//}
//Std_err_e TIMER0_e_setCallBackCMP(void(*Pfunc)(void)){
//
//	Std_err_e Local_e_error_states =OK;
//	if(Pfunc!=NULL){
//
//		GlobalPtrFuncCMP=Pfunc;
//	}
//	else
//	{
//
//		Local_e_error_states=NOK;
//	}
//
//
//	return Local_e_error_states;
//}
//
//void __vector_11(void)  __attribute__((signal));
//
//void __vector_11(void)
//{
//	GlobalPtrFuncOVF();
//}
//void __vector_10(void)  __attribute__((signal));
//
//void __vector_10(void)
//{
//	GlobalPtrFuncCMP();
//}
//
//
