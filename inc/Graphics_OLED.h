
#ifndef GRAPHICS_OLED_H_
#define GRAPHICS_OLED_H_

/*==================[inclusions]=============================================*/

#include <stdint.h>
#include "SSD1322_OLED.h"
#include "streamOut.h"

/*==================[macros]=================================================*/

#define GFX_OLED_WIDTH    128
#define GFX_OLED_HEIGHT   64

#define GFX_FONT_5X7    0
#define GFX_FONT_7X9    1
#define GFX_FONT_16X32  2

/*==================[external data declaration]==============================*/

extern uint64_t Graphics_OLED_framebuffer[GFX_OLED_WIDTH];
extern const streamOut_t streamOut_Graphic_OLED;
/*==================[init/poll]==============================================*/

void Graphics_OLED_init(void);

void Graphics_OLED_poll(void);

/*==================[public API]============================================*/

void Graphics_OLED_clear(void);




void Graphics_OLED_printAt(uint8_t x, uint8_t y, uint8_t fontId, char* text);

/*==================[end of file]============================================*/
#endif /* GRAPHICS_OLED_H_ */

