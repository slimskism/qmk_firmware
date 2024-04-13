 /* Copyright 2021 Dane Evans
  *
  * This program is free software: you can redistribute it and/or modify
  * it under the terms of the GNU General Public License as published by
  * the Free Software Foundation, either version 2 of the License, or
  * (at your option) any later version.
  *
  * This program is distributed in the hope that it will be useful,
  * but WITHOUT ANY WARRANTY; without even the implied warranty of
  * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  * GNU General Public License for more details.
  *
  * You should have received a copy of the GNU General Public License
  * along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
  #pragma once

/* Select hand configuration */

///https://thomasbaart.nl/2018/12/01/reducing-firmware-size-in-qmk/

#define MASTER_RIGHT

#define CUSTOM_FONT

#define CUSTOM_LAYER_READ //if you remove this it causes issues - needs better guarding

#define QUICK_TAP_TERM 0
#ifdef TAPPING_TERM
    #undef TAPPING_TERM
    #define TAPPING_TERM 200
#endif
#define ENCODER_DIRECTION_FLIP

#define RGBLIGHT_SLEEP
//
//#define RGBLIGHT_LAYERS

/* ws2812 RGB LED */
#define WS2812_DI_PIN D3

#define RGBLED_NUM 30    // Number of LEDs per side
//#define RGBLIGHT_SPLIT
//#define RGBLED_SPLIT {RGBLED_NUM, RGBLED_NUM}
#define RGB_MATRIX_LED_COUNT (RGBLED_NUM * 2)
//#define RGB_MATRIX_SPLIT {RGBLED_NUM, RGBLED_NUM}
#define DRIVER_LED_TOTAL RGB_MATRIX_LED_COUNT

#define RGB_DISABLE_WHEN_USB_SUSPENDED // turn off effects when suspended
#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 100 // limits maximum brightness of LEDs to 150 out of 255. Higher may cause the controller to crash.
#define RGB_MATRIX_LED_FLUSH_LIMIT 128 // limits update rate of leds (time in ms)
#define ENABLE_RGB_MATRIX_OPENRGB_DIRECT
#define RGB_MATRIX_DEFAULT_MODE RGB_MATRIX_OPENRGB_DIRECT
#define SPLIT_LAYER_STATE_ENABLE
#define SPLIT_TRANSPORT_MIRROR
#define SPLIT_LED_STATE_ENABLE

