#ifndef __PWM_H_
#define __PWM_H_

/**
 * Include the necessary header files
 */

#include <avr/io.h>
#include "gpio.h"

/**
 * Macro Definitions
 */
#define F_CPU 16000000UL 	/**< Clock Frequency of MCU is 16 MHz */
#define NON_INVERTING_FAST_PWM_MODE ((1<<COM1A1)|(1<<WGM11)|(1<<WGM10))  /**< Non-inverting Fast PWM mode*/
#define PRESCALER_CONFIG ((1<<WGM12)|(1<<CS11)|(1<<CS10)) /**< Set Prescaler Value to 64 */
#define CONFIGURE_PWM_PIN (1<<DDB1)/**<Configure PWM pin*/
#define UBRR 103  /**< Baud Rate Configuration*/
#define UBRR_MSB ((UBRR>>8) & (0x00ff)) /**< UBRR0H configuration for Baud Rate*/
#define SENDING_NUMBER_OF_BITS ((1<<UCSZ01)|(1<<UCSZ00)) /**< No of bits transmission for UART protocol configuration*/
#define CONFIGURE_UCSR0B ((1<<RXEN0)|(1<<TXEN0)|(1<<RXCIE0)|(1<<TXCIE0)) /**< Configure UCSR0B register*/
#define TRASMITTER_EMPTY (!(UCSR0A&(1<<UDRE0)))
/**
 * Define Duty Ratios
 * 
 */
#define D0 0
#define D20 205
#define D40 410
#define D70 716
#define D95 972
/**
 * Function Prototypes
 */

/**
 * @brief This function configures necessary registers for PWM module
 * 
 */
void PWMInit(void);

/**
 * @brief Checks for the digital value of potentiometer and generates PWM signal
 */
void pwm(activity_output* ADCVALUE);

/**
 * @brief This function configures necessary registers for UART module
 * 
 */
void UARTInit(void);

/**
 * @brief Main program for UART
 */
void uart(activity_output*);
/**
 * @brief Write the data to transmitter UDR0 regisrer
 */
void UARTWriteTemperature(char data);


#endif
