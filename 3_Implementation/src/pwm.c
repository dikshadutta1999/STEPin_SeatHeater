
/**
 * Include the header files
 */

#include "pwm.h"
#include <util/delay.h>
#include <string.h>
/**
 * @brief Configure necessary registers for PWM module
 * 
 */
void PWMInit()
{
        TCCR1A|=NON_INVERTING_FAST_PWM_MODE;
        TCCR1B|=PRESCALER_CONFIG;
        DDRB|=CONFIGURE_PWM_PIN;
}
void pwm(activity_output* ADCVALUE)
{
    /**
     * Checks for digital value of potentiometer and generates PWM and sets the temperature
     **/
    if((ADCVALUE->gpio_out)==0)
    {
    OCR1A=0;
    }
    else
    {
    if((ADCVALUE->adc_out)<201)
    {
    OCR1A=D20;
    ADCVALUE->temperature=20;
    }
    else if((ADCVALUE->adc_out)<501)
    {
    OCR1A=D40;
    ADCVALUE->temperature=25;
    }
    else if((ADCVALUE->adc_out)<701)
    {
    OCR1A=D70;
    ADCVALUE->temperature=29;
    }
    else
    {
    OCR1A=D95;
    ADCVALUE->temperature=33;
    }
    }
    _delay_ms(200);
}

void UARTInit()
{
    UBRR0L=UBRR;
    UBRR0H=UBRR_MSB;
    UCSR0B|=CONFIGURE_UCSR0B;
    UCSR0C=SENDING_NUMBER_OF_BITS;
}
/**
 * @brief Write the character to serial monitor
 * 
 * @param data 
 */
void UARTWriteTemperature(char temperature)
{
    /** Wait until Transmitter is empty*/
while(TRASMITTER_EMPTY)
{
}
UDR0=temperature;
}
/**
 * @brief Main program of UART Module
 * 
 */
void uart(activity_output* UART)
{
    /** Check if LED is on*/
    if(UART->gpio_out==1)
    UARTWriteTemperature(UART->temperature);

}
