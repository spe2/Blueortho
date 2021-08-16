/*
Copyright 2018-2021 <Pierre Constantineau>

3-Clause BSD License

Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.

3. Neither the name of the copyright holder nor the names of its contributors may be used to endorse or promote products derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR 
A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT 
LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT 
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

*/
#ifndef KEYBOARD_CONFIG_H
#define KEYBOARD_CONFIG_H
#include "hardware_variants.h"
#define HARDWARE_MAPPING  NRF52832_FEATHER
#include "breakout_mapping.h"

#define KEYBOARD_SIDE MASTER
// CHANGE THIS FOR THE KEYBOARD TO MATCH WHAT IS BEING FLASHED. OPTIONS: LEFT  RIGHT  MASTER

#define DEVICE_NAME_M                         "BlueOrtho"                          /**< Name of device. Will be included in the advertising data. */

#define DEVICE_MODEL                        "BlueOrtho_V1"                          /**< Name of device. Will be included in the advertising data. */

#define MANUFACTURER_NAME                   "Southpaw Design"                      /**< Manufacturer. Will be passed to Device Information Service. */


/* HARDWARE DEFINITION*/
/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 12
#define MATRIX_ROW_PINS { 28, 31, 4, 5 }
#define MATRIX_COL_PINS { 10, 9, 19, 21, 23, 12, 41, 30, 2, 3, 47, 42  }

#define UNUSED_PINS {}

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

#define PERIPHERAL_COUNT 1 // more than 1 doesn't work yet... 

	#define BACKLIGHT_PWM_ON 0
	#define WS2812B_LED_PIN 33
	
	#define WS2812B_LED_COUNT 12
	#define WS2812B_LED_ON 1 

#define KEYMAP( \
    A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, \
    B1, B2, B3, B4, B5, B6, B7, B8, B9, B10, B11, B12, \
    C1, C2, C3, C4, C5, C6, C7, C8, C9, C10, C11, C12, \
    D1, D2, D3, D4, D5, D6, D7, D8, D9, D10, D11, D12 \
    ) { \
        {A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12}, \
        {B1, B2, B3, B4, B5, B6, B7, B8, B9, B10, B11, B12}, \
        {C1, C2, C3, C4, C5, C6, C7, C8, C9, C10, C11, C12}, \
        {D1, D2, D3, D4, D5, D6, D7, D8, D9, D10, D11, D12} \
    }


#endif /* KEYBOARD_CONFIG_H */
