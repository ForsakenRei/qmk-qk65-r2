/* 
Copyright 2022 Qwertykeys

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x4F53  //0x4F53 for qwertykeys
#define PRODUCT_ID      0x514B  //0x514B QK for QK65
#define DEVICE_VER      0x0002 
#define MANUFACTURER    Qwertykeys 
#define PRODUCT         QK65 Hotswap


/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 15

/* Keyboard Matrix Assignments */
#define MATRIX_ROW_PINS { A1, A2, A3, A4, A5 }
#define MATRIX_COL_PINS { A7, B0, B1, B2, B10, B11, B12, B13, B14, B15, A8, B6, B7, A6, A15 }
/* COL2ROW, ROW2COL */
#define DIODE_DIRECTION COL2ROW

#define USB_POLLING_INTERVAL_MS 1

#define LED_CAPS_LOCK_PIN A0
#define LED_PIN_ON_STATE 0
/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

#define TAP_CODE_DELAY 5

/* NKRO */
#ifdef NKRO_ENABLE
#    define FORCE_NKRO
#endif