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
// lcd/dogm/status/cutter.h - Status Screen Laser / Spindle bitmaps
//

#define STATUS_CUTTER_WIDTH 24
#define STATUS_CUTTER_X     80

#if ENABLED(LASER_FEATURE)
  #ifdef STATUS_CUTTER_ANIM
    const unsigned char status_cutter_on_bmp[] PROGMEM = {
    
    };
    const unsigned char status_cutter_bmp[] PROGMEM = {
      
    };
  #else
    const unsigned char status_cutter_bmp[] PROGMEM = {
     
    };
  #endif
#else
  #ifdef STATUS_CUTTER_ANIM
    const unsigned char status_cutter_on_bmp[] PROGMEM = {
    
    };
    const unsigned char status_cutter_bmp[] PROGMEM = {
      
    };
  #else
    const unsigned char status_cutter_bmp[] PROGMEM = {
     
    };
  #endif
#endif
