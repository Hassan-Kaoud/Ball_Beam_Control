################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../ADC_program.c \
../CLCD_program.c \
../DIO_program.c \
<<<<<<< HEAD
../GI_program.c \
../TIMER0_program.c \
../UART_program.c \
../main.c \
../servo.c 
=======
../EXTI_program.c \
../GI_program.c \
../Servo.c \
../TIMER0_program.c \
../UART_program.c \
../Ultrasonic.c \
../main.c 
>>>>>>> 1372b78cc79d5e1be29907a60bd818f15acc2acb

OBJS += \
./ADC_program.o \
./CLCD_program.o \
./DIO_program.o \
<<<<<<< HEAD
./GI_program.o \
./TIMER0_program.o \
./UART_program.o \
./main.o \
./servo.o 
=======
./EXTI_program.o \
./GI_program.o \
./Servo.o \
./TIMER0_program.o \
./UART_program.o \
./Ultrasonic.o \
./main.o 
>>>>>>> 1372b78cc79d5e1be29907a60bd818f15acc2acb

C_DEPS += \
./ADC_program.d \
./CLCD_program.d \
./DIO_program.d \
<<<<<<< HEAD
./GI_program.d \
./TIMER0_program.d \
./UART_program.d \
./main.d \
./servo.d 
=======
./EXTI_program.d \
./GI_program.d \
./Servo.d \
./TIMER0_program.d \
./UART_program.d \
./Ultrasonic.d \
./main.d 
>>>>>>> 1372b78cc79d5e1be29907a60bd818f15acc2acb


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


