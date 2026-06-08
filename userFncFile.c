#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "inc/userFncFile.h"
#include "inc/systemTimer.h"
#include "inc/led_Led1.h"
#include "inc/led_Led2.h"
#include "inc/timer_api1.h"
#include "inc/conversionFunctions.h"
#include "inc/Graphics_OLED.h"
#include "inc/Keyboard_Pad.h"
#include "inc/Keyboard_Nav.h"

/* User Arrays */
char STR_KEY[3];

void onReset()
{
    Graphics_OLED_clear();
    Graphics_OLED_printAt(0, 0, 1, "TECLA TEST");
    LEDs_Led1_state(0);
}


void Keyboard_Nav_onPress(uint8_t key)
{
    LEDs_Led1_state(2);
    Graphics_OLED_printAt(0, 20, 0, "TECLA:%u ", key);
}


void Keyboard_Pad_onPress(uint8_t key)
{
    LEDs_Led2_state(2);
    Graphics_OLED_printAt(0, 30, 0, "TECLA:%u ", key);
}



