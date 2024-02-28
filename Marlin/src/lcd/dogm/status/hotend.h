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
// lcd/dogm/status/hotend.h - Status Screen Hotends bitmaps
//

#if HAS_MMU
  #define STATUS_HOTEND_BITMAPS EXTRUDERS
  #define MAX_HOTEND_BITMAPS 8
#else
  #define STATUS_HOTEND_BITMAPS HOTENDS
  #define MAX_HOTEND_BITMAPS 5
#endif
#if STATUS_HOTEND_BITMAPS > MAX_HOTEND_BITMAPS
  #undef STATUS_HOTEND_BITMAPS
  #define STATUS_HOTEND_BITMAPS MAX_HOTEND_BITMAPS
#endif

#define STATUS_HOTEND1_WIDTH  0

#if STATUS_HOTEND_BITMAPS == 1 || defined(STATUS_HOTEND_NUMBERLESS)

  const unsigned char status_hotend_a_bmp[] PROGMEM = {
    
    #if defined(STATUS_HOTEND_INVERTED) && !defined(STATUS_HOTEND_ANIM)
  
    #else
    
    #endif
    
  };

  #ifdef STATUS_HOTEND_ANIM

    const unsigned char status_hotend_b_bmp[] PROGMEM = {
    
    };

  #endif

#elif STATUS_HOTEND_BITMAPS > 1

  #ifdef STATUS_HOTEND_ANIM

    const unsigned char status_hotend1_a_bmp[] PROGMEM = {
      
      #if LCD_FIRST_TOOL == 0
        
      #else
        
      #endif
      
    };

    const unsigned char status_hotend1_b_bmp[] PROGMEM = {
      
      #if LCD_FIRST_TOOL == 0
       
      #else
       
      #endif
    
    };

    const unsigned char status_hotend2_a_bmp[] PROGMEM = {
      
      #if LCD_FIRST_TOOL == 0
        
      #else
       
      #endif
     
    };

    const unsigned char status_hotend2_b_bmp[] PROGMEM = {
     
      #if LCD_FIRST_TOOL == 0
       
      #else
       
      #endif
      
    };

  #else

    const unsigned char status_hotend1_a_bmp[] PROGMEM = {
     
      #if LCD_FIRST_TOOL == 0
        
      #else
        
      #endif
      
    };

    const unsigned char status_hotend2_a_bmp[] PROGMEM = {
      
      #if LCD_FIRST_TOOL == 0
       
      #else
       
      #endif
      
    };

  #endif

  #if STATUS_HOTEND_BITMAPS >= 3

    #ifdef STATUS_HOTEND_ANIM

      const unsigned char status_hotend3_a_bmp[] PROGMEM = {
        
        #if LCD_FIRST_TOOL == 0
          
        #else
         
        #endif
        
      };

      const unsigned char status_hotend3_b_bmp[] PROGMEM = {
       
        #if LCD_FIRST_TOOL == 0
          
        #else
          
        #endif
        
      };

    #else

      const unsigned char status_hotend3_a_bmp[] PROGMEM = {
       
        #if LCD_FIRST_TOOL == 0
          
        #else
          
        #endif
       
      };

    #endif

  #endif

  #if STATUS_HOTEND_BITMAPS >= 4

    #ifdef STATUS_HOTEND_ANIM

      const unsigned char status_hotend4_a_bmp[] PROGMEM = {

        #if LCD_FIRST_TOOL == 0
          
        #else
         
        #endif
        
      };

      const unsigned char status_hotend4_b_bmp[] PROGMEM = {
        
        #if LCD_FIRST_TOOL == 0
         
        #else
          
        #endif
      
      };

    #else

      const unsigned char status_hotend4_a_bmp[] PROGMEM = {
        
        #if LCD_FIRST_TOOL == 0
         
        #else
         
        #endif
      
      };

    #endif

  #endif

  #if STATUS_HOTEND_BITMAPS >= 5

    #ifdef STATUS_HOTEND_ANIM

      const unsigned char status_hotend5_a_bmp[] PROGMEM = {
       
        #if LCD_FIRST_TOOL == 0
          
        #else
         
        #endif
       
      };

      const unsigned char status_hotend5_b_bmp[] PROGMEM = {
       
        #if LCD_FIRST_TOOL == 0
          
        #else
          
        #endif
        
      };

    #else

      const unsigned char status_hotend5_a_bmp[] PROGMEM = {
        
        #if LCD_FIRST_TOOL == 0
          
        #else
         
        #endif
       
      };

    #endif

  #endif

  #if STATUS_HOTEND_BITMAPS >= 6

    #ifdef STATUS_HOTEND_ANIM

      const unsigned char status_hotend6_a_bmp[] PROGMEM = {
        
        #if LCD_FIRST_TOOL == 0
         
        #else
          
        #endif
        
      };

      const unsigned char status_hotend6_b_bmp[] PROGMEM = {
        
        #if LCD_FIRST_TOOL == 0
        
        #else
          
        #endif
        
      };

    #else

      const unsigned char status_hotend6_a_bmp[] PROGMEM = {
        
        #if LCD_FIRST_TOOL == 0
          
        #else
         
        #endif
       
      };

    #endif

  #endif

  #if STATUS_HOTEND_BITMAPS >= 7

    #ifdef STATUS_HOTEND_ANIM

      const unsigned char status_hotend7_a_bmp[] PROGMEM = {
        
        #if LCD_FIRST_TOOL == 0
        
        #else
         
        #endif
       
      };

      const unsigned char status_hotend7_b_bmp[] PROGMEM = {
        
        #if LCD_FIRST_TOOL == 0
        
        #else
          
        #endif
       
      };

    #else

      const unsigned char status_hotend7_a_bmp[] PROGMEM = {
        
        #if LCD_FIRST_TOOL == 0
         
        #else
         
        #endif
       
      };

    #endif

  #endif

  #if STATUS_HOTEND_BITMAPS >= 8

    #ifdef STATUS_HOTEND_ANIM

      const unsigned char status_hotend8_a_bmp[] PROGMEM = {
       
        #if LCD_FIRST_TOOL == 0
         
        #else
         
        #endif
       
      };

      const unsigned char status_hotend8_b_bmp[] PROGMEM = {
        
        #if LCD_FIRST_TOOL == 0
         
        #else
          
        #endif
       
      };

    #else

      const unsigned char status_hotend8_a_bmp[] PROGMEM = {
      
        #if LCD_FIRST_TOOL == 0
         
        #else
         
        #endif
       
      };

    #endif

  #endif

#endif
