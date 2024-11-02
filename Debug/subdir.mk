################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../ADC_program.c \
../CLCD_program.c \
../DIO_program.c \
../EXTI_program.c \
../GI_program.c \
../Servo.c \
../TIMER0_program.c \
../UART_program.c \
../Ultrasonic.c \
../main.c 

OBJS += \
./ADC_program.o \
./CLCD_program.o \
./DIO_program.o \
./EXTI_program.o \
./GI_program.o \
./Servo.o \
./TIMER0_program.o \
./UART_program.o \
./Ultrasonic.o \
./main.o 

C_DEPS += \
./ADC_program.d \
./CLCD_program.d \
./DIO_program.d \
./EXTI_program.d \
./GI_program.d \
./Servo.d \
./TIMER0_program.d \
./UART_program.d \
./Ultrasonic.d \
./main.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


