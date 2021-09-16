/#ifndef __ACTIVITY_1_H_
#define __ACTIVITY_1_H_
/**
 * @file activity1.h
 * @author POOJA
 * @brief Header file for activity1

 *
 */


/**
 * Macro Definitions
 */

#define F_CPU 16000000UL 	/**< Clock Frequency of MCU is 16 MHz */
#define LED_PORT (PORTB)    /**< LED Port Number */
#define LED_PIN  (PORTB2)   /**< LED Pin number  */
#define BUTTON_SENSOR  (PORTB0)   /**< Port for Button Sensor  */
#define TEMP_SENSOR  (PORTB1)   /**< Port for Temperature Sensor   */

/**
 * Include files
 */
#include <util/delay.h>
#include <avr/io.h>


/**
 * Function Definitions
 */

/**
 * @brief Initialize all the Peripherals and pin configurations
 *
 */
void init_peripheral(void);

/**
 * @brief Function to turn LED on
 *
 */
void TurnLED_ON();

/**
 * @brief Function to turn LED off
 *
 */
void TurnLED_OFF();

/**
 * @brief Activity 1 to Turn ON LED if switches for Button sensor and Heater sensor are pressed
 *
 */
int activity1_LED(void);

#endif /* __ACTIVITY_1_H_ */
