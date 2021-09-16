
#include "gpio.h"

/**
 * @brief Initialize all the Peripherals and pin configurations
 * 
 */
void GPIOInit(void)
{
	/* Configure LED Pin */
	DDRB|=CONFIGURE_PB0;
	/* Configure the switches*/
	DDRD&=~CONFIGURE_PUSH_BUTTONS;
	/* logic high to ports PD0, PD4 */
	PORTD|=PD0_PD4_LOGIC_HIGH;
}
/**
 * @brief Change LED state according to the activation of push buttons

 */
void change_led_state(uint8_t state)
{
	LED_PORT = (state << LED_PIN);
}


/**
 * @brief Function which determines the status of LED according to acrivation of push buttons 
 */
void gpio(activity_output *GPIO)
{
    /* Check status of push buttons and glow the LED appropriately */
		if(CHECK_ACTIVATION_OF_PUSH_BUTTONS==1)
        {
        change_led_state(LED_ON);
        GPIO->gpio_out=LED_ON;
		}
		else
		{
        change_led_state(LED_OFF);
		GPIO->gpio_out=LED_OFF;
		}
	}