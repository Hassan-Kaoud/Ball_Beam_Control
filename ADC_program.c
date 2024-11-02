#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "ADC_interface.h"
#include "ADC_private.h"
#include "ADC_config.h"

static u16 *Global_u16Ptr =NULL;
static void (*Global_voidPtrFunc)(void) =NULL;
static u8 ADC_State=IDLE;


u32 Mapping (u32 Range1_max,u32 Range1_min,u32 Range2_max,u32 Range2_min,u32 Range1_reading){

	return (Range2_max-((Range2_max-Range2_min)*(Range1_max-Range1_reading)/(Range1_max-Range1_min)));
}


void ADC_voidInit(void)
{

	//int or polling
	CLR_BIT(ADCSRA,ADCSRA_ADIE);
	//ref volt =AVCC
	SET_BIT(ADMUX,ADMUX_REFS0);
	CLR_BIT(ADMUX,ADMUX_REFS1);
	//10 bits or 8 bits
	CLR_BIT(ADMUX,ADMUX_ADLAR);
	//prescaler
	SET_BIT(ADCSRA,ADCSRA_ADPS0);

	SET_BIT(ADCSRA,ADCSRA_ADPS1);

	SET_BIT(ADCSRA,ADCSRA_ADPS2);
	//Enable
	SET_BIT(ADCSRA,ADCSRA_ADEN);

}
Std_err_e ADC_u16GetChannelReadingSunch(u8 Copy_u8ChannelNum , u16 *Copy_u16Reading)
{
	Std_err_e Local_e_ErrStatus = OK;
	u32 Local_u32Counter=0;
	//Set Channel
	if(NULL != Copy_u16Reading){
		ADMUX&=0b11100000;
		ADMUX|=Copy_u8ChannelNum;
		//Start Conversion
		SET_BIT(ADCSRA,ADCSRA_ADSC);
		//POLLING
		while((GET_BIT(ADCSRA,ADCSRA_ADIF)==0) && (Local_u32Counter < 50000)){
			Local_u32Counter++;
		}
		if(Local_u32Counter == 50000)
		{
			Local_e_ErrStatus = 1;
		}
		else
		{
			SET_BIT(ADCSRA,ADCSRA_ADIF);
            *Copy_u16Reading = ADC;
		}
	}
	else{
		Local_e_ErrStatus =NOK;
	}

	return Local_e_ErrStatus;

}
Std_err_e ADC_u16GetChannelReadingASunch(u8 Copy_u8ChannelNum , u16 *Copy_u16Reading ,void(*PtrFuncNot)(void))
{
	Std_err_e Local_e_ErrStatus = OK;
	if(ADC_State==IDLE){
		if((NULL != Copy_u16Reading) && (NULL != PtrFuncNot))
		{
			ADC_State = BUSY;
			Global_u16Ptr = Copy_u16Reading;
			Global_voidPtrFunc = PtrFuncNot;
			ADMUX&=0b11100000;
			ADMUX|=Copy_u8ChannelNum;
			//Start Conversion
			SET_BIT(ADCSRA,ADCSRA_ADSC);
			SET_BIT(ADCSRA,ADCSRA_ADIE);
		}
		else{
			Local_e_ErrStatus = NOK;
		}
	}

	return Local_e_ErrStatus;
}
void __vector_16(void)  __attribute__((signal));
void __vector_16(void)
{
	ADC_State = IDLE;
	Global_u16Ptr =ADC;

	Global_voidPtrFunc();

	CLR_BIT(ADCSRA ,ADCSRA_ADIE);
}

