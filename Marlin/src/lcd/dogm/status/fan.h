/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

//
// lcd/dogm/status/fan.h - Status Screen Fan bitmaps
//

#undef STATUS_FAN_WIDTH
#define STATUS_FAN_WIDTH 20

#if STATUS_FAN_FRAMES <= 2

  #define STATUS_FAN_Y 2

  #if ENABLED(STATUS_ALT_FAN_BITMAP)

    const unsigned char status_fan0_bmp[] PROGMEM = {

    };

    #if STATUS_FAN_FRAMES == 2
      const unsigned char status_fan1_bmp[] PROGMEM = {

      };
    #endif

  #else // !STATUS_ALT_FAN_BITMAP

    const unsigned char status_fan0_bmp[] PROGMEM = {
 
    };

    #if STATUS_FAN_FRAMES == 2
      const unsigned char status_fan1_bmp[] PROGMEM = {

      };
    #endif

  #endif // !STATUS_ALT_FAN_BITMAP

#elif STATUS_FAN_FRAMES == 3

  #if ENABLED(STATUS_ALT_FAN_BITMAP)

    const unsigned char status_fan0_bmp[] PROGMEM = {

    };
    const unsigned char status_fan1_bmp[] PROGMEM = {

    };
    const unsigned char status_fan2_bmp[] PROGMEM = {

    };

  #else // !STATUS_ALT_FAN_BITMAP

    const unsigned char status_fan0_bmp[] PROGMEM = {

    };
    const unsigned char status_fan1_bmp[] PROGMEM = {

    };
    const unsigned char status_fan2_bmp[] PROGMEM = {

    };

  #endif // !STATUS_ALT_FAN_BITMAP

#elif STATUS_FAN_FRAMES == 4

  #if ENABLED(STATUS_ALT_FAN_BITMAP)

    const unsigned char status_fan0_bmp[] PROGMEM = {

    };
    const unsigned char status_fan1_bmp[] PROGMEM = {

    };
    const unsigned char status_fan2_bmp[] PROGMEM = {

    };
    const unsigned char status_fan3_bmp[] PROGMEM = {

    };

  #else // !STATUS_ALT_FAN_BITMAP

    const unsigned char status_fan0_bmp[] PROGMEM = {

    };
    const unsigned char status_fan1_bmp[] PROGMEM = {

    };
    const unsigned char status_fan2_bmp[] PROGMEM = {

    };
    const unsigned char status_fan3_bmp[] PROGMEM = {

    };

  #endif // !STATUS_ALT_FAN_BITMAP

#endif
