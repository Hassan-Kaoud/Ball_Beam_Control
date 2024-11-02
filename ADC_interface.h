#ifndef ADC_INTERFACE_H_
#define ADC_INTERFACE_H_


void ADC_voidInit(void);
Std_err_e ADC_u16GetChannelReadingSunch(u8 Copy_u8ChannelNum , u16 *Copy_u16Reading);
Std_err_e ADC_u16GetChannelReadingASunch(u8 Copy_u8ChannelNum , u16 *Copy_u16Reading ,void(*PtrFuncNot)(void));

u32 Mapping (u32 Range1_max,u32 Range1_min,u32 Range2_max,u32 Range2_min,u32 Range1_reading);






#endif
