/****************************************************/
/********** SWC : DIO *******************************/
/********** Date : 13 August 2024 *******************/
/********** Author : Yousef Ahmad *******************/
/********** Version :1.0          *******************/

#ifndef TIMER0_INTERFACE_H_
#define TIMER0_INTERFACE_H_


void TIMER0_voidINIT(void);
void TIMER0_voidPreLoadValue(u8 Copy_u8Ticks);

void TIMER0_voidSetCmpValue(u8 Copy_u8Ticks);

Std_err_e TIMER0_e_setCallBackOVF(void(*Pfunc)(void));
Std_err_e TIMER0_e_setCallBackCMP(void(*Pfunc)(void));
#endif
