

#include "adc.h"

/**
 * @brief Configure the ADC Module
 * 
 */
/**
 * @brief Converts the analog signal in the channel ch to digital value
 */
uint16_t ReadADC(uint8_t ch)
{
    ADMUX&=0xf8;
    ch=ch&0b00000111;
    ADMUX|=ch;
    ADCSRA|=START_CONVERSION;
    while(WAIT_FOR_CONVERSION==1);
    ADCSRA|=CONVERSION_COMPLETE;s
    return(ADC);
}
/**
 * @brief Function which stores the converted digital value in the adc_outt member in activity_out structure
 */
void adc(activity_output* ADCVALUE)
{
    /** Check if LED is glown and start the ADC process*/
    if(ADCVALUE->gpio_out==1)
    {
    uint16_t temp=0;
    ADMUX|=CONFIGURE_RESOLUTION;
    ADCSRA|=ENABLE_ADC;
    temp=ReadADC(3);
    ADCVALUE->adc_out=temp;
    }
    else
    {
        ADC=0;
        ADCVALUE->adc_out=0;
    }
}