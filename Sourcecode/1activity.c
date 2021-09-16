
/**
 * @file activity1.c
 * @author  POOJA
 * @brief User defined utilities, to define pins and ports to Blink an LED ON/OFF
 *
 */

#include "activity1.h"


void init_peripheral(void)
{
	DDRB |= (1<<PB2); // set PB2=1 for LED
    DDRB &= ~(1<<PB0); //clear bit
    PORTB |= (1<<PB0); //set bit PB0 for SeatSwitch
    DDRB &= ~(1<<PB1); //clear bit
    PORTB |= (1<<PB1); //set bit PB0 for HeaterSwitch
}

void TurnLED_ON(){
    LED_PORT |= (1<<LED_PIN);
}

void TurnLED_OFF(){
    LED_PORT &= ~(1<<LED_PIN);
}

int activity1=0;
int acti1_LED(void)
{
       init_peripheral();
        if(!(PIND&(1<<BUTTON_SENSOR )) && !(PIND&(1<<TEMP_SENSOR))) //both the switches are pressed
        {
            activity1=1;
        }
        else  //in all other cases
        {
            activity1=0;
        }
    return activity1;
}
