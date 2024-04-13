// Copyright 2023 Stephen Martin (@slimskism)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

#define MATRIX_ROWS 4
#define MATRIX_COLUMNS 4

#define RGB_MATRIX_LED_COUNT 24
#define WS2812_DI_PIN D1
#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 100
#define DRIVER_LED_TOTAL RGB_MATRIX_LED_COUNT
#define ENABLE_RGB_MATRIX_OPENRGB_DIRECT
#define RGB_MATRIX_DEFAULT_MODE ENABLE_RGB_MATRIX_OPENRGB_DIRECT
