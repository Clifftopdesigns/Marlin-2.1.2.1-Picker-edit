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
// lcd/dogm/status/combined.h - Status Screen Combined Heater bitmaps
//

#undef STATUS_HOTEND_ANIM
#undef STATUS_BED_ANIM
#define STATUS_HEATERS_XSPACE 24

//
// Status Screen Combined Heater bitmaps
//
#if HAS_HEATED_BED && HOTENDS <= 4

  #if HOTENDS == 0

    #define STATUS_HEATERS_WIDTH 96
    #define STATUS_BED_X         74

    const unsigned char status_heaters_bmp[] PROGMEM = {
    
    };

  #elif HOTENDS == 1

    #define STATUS_HEATERS_WIDTH 96
    #define STATUS_BED_X         74

    const unsigned char status_heaters_bmp[] PROGMEM = {

    };

  #elif HOTENDS == 2

    #define STATUS_HEATERS_WIDTH 96
    #define STATUS_BED_X         74

    const unsigned char status_heaters_bmp[] PROGMEM = {

      #if LCD_FIRST_TOOL == 0

      #else

      #endif

    };

  #elif HOTENDS == 3

    #define STATUS_HEATERS_WIDTH 96
    #define STATUS_BED_X         74

    const unsigned char status_heaters_bmp[] PROGMEM = {

      #if LCD_FIRST_TOOL == 0

      #else

      #endif

    };

  #else // HOTENDS > 3

    #define STATUS_HEATERS_WIDTH 120
    #define STATUS_BED_X          98

    const unsigned char status_heaters_bmp[] PROGMEM = {

      #if LCD_FIRST_TOOL == 0

      #else

      #endif
 
    };

  #endif // HOTENDS

  #define STATUS_BED_WIDTH  20
  #define STATUS_BED_TEXT_X (STATUS_BED_X + STATUS_BED_WIDTH / 2)

#else // !HAS_HEATED_BED || HOTENDS > 3

  #if HOTENDS == 0

    #define STATUS_HEATERS_WIDTH  0

  #elif HOTENDS == 1

    #define STATUS_HEATERS_WIDTH  12

    const unsigned char status_heaters_bmp[] PROGMEM = {

    };

  #elif HOTENDS == 2

    #define STATUS_HEATERS_WIDTH  36

    const unsigned char status_heaters_bmp[] PROGMEM = {
  
      #if LCD_FIRST_TOOL == 0
       
      #else

      #endif
   
    };

  #elif HOTENDS == 3

    #define STATUS_HEATERS_WIDTH  60

    const unsigned char status_heaters_bmp[] PROGMEM = {
    
      #if LCD_FIRST_TOOL == 0
      
      #else
      
      #endif
     
    };

  #elif HOTENDS == 4

    #define STATUS_HEATERS_WIDTH  84

    const unsigned char status_heaters_bmp[] PROGMEM = {
      
      #if LCD_FIRST_TOOL == 0
        B00111100,B11110000,B00000000,B00111110,B11110000,B00000000,B00111100,B11110000,B00000000,B00111100,B11110000,
        B00111011,B01110000,B00000000,B00111100,B11110000,B00000000,B00111011,B01110000,B00000000,B00111011,B01110000,
        B00111011,B01110000,B00000000,B00111010,B11110000,B00000000,B00111111,B01110000,B00000000,B00111111,B01110000,
        B00011011,B01100000,B00000000,B00011110,B11100000,B00000000,B00011110,B11100000,B00000000,B00011100,B11100000,
        B00011011,B01100000,B00000000,B00011110,B11100000,B00000000,B00011101,B11100000,B00000000,B00011111,B01100000,
        B00111011,B01110000,B00000000,B00111110,B11110000,B00000000,B00111011,B11110000,B00000000,B00111011,B01110000,
        B00111100,B11110000,B00000000,B00111110,B11110000,B00000000,B00111000,B01110000,B00000000,B00111100,B11110000,
      #else
        B00111110,B11110000,B00000000,B00111100,B11110000,B00000000,B00111100,B11110000,B00000000,B00111011,B01110000,
        B00111100,B11110000,B00000000,B00111011,B01110000,B00000000,B00111011,B01110000,B00000000,B00111011,B01110000,
        B00111010,B11110000,B00000000,B00111111,B01110000,B00000000,B00111111,B01110000,B00000000,B00111011,B01110000,
        B00011110,B11100000,B00000000,B00011110,B11100000,B00000000,B00011100,B11100000,B00000000,B00011011,B01100000,
        B00011110,B11100000,B00000000,B00011101,B11100000,B00000000,B00011111,B01100000,B00000000,B00011000,B00100000,
        B00111110,B11110000,B00000000,B00111011,B11110000,B00000000,B00111011,B01110000,B00000000,B00111111,B01110000,
        B00111110,B11110000,B00000000,B00111000,B01110000,B00000000,B00111100,B11110000,B00000000,B00111111,B01110000,
      #endif
      B00111111,B11110000,B00000000,B00111111,B11110000,B00000000,B00111111,B11110000,B00000000,B00111111,B11110000,
      B00001111,B11000000,B00000000,B00001111,B11000000,B00000000,B00001111,B11000000,B00000000,B00001111,B11000000,
      B00000111,B10000000,B00000000,B00000111,B10000000,B00000000,B00000111,B10000000,B00000000,B00000111,B10000000,
      B00000011,B00000000,B00000000,B00000011,B00000000,B00000000,B00000011,B00000000,B00000000,B00000011,B00000000
    };

  #else // HOTENDS > 4

    #define STATUS_HEATERS_WIDTH  108

    const unsigned char status_heaters_bmp[] PROGMEM = {

      #if LCD_FIRST_TOOL == 0

      #else

      #endif
 
    };

  #endif // HOTENDS

#endif // !HAS_HEATED_BED || HOTENDS > 3
