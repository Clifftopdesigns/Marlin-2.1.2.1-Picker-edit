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
// lcd/dogm/status/cooler.h - Status Screen Laser Cooler bitmaps
//
#if HAS_COOLER

  #define STATUS_COOLER_WIDTH 22

  const unsigned char status_cooler_bmp2[] PROGMEM = {
  
  };
  const unsigned char status_cooler_bmp1[] PROGMEM = {
   
  };

#endif

#if ENABLED(LASER_COOLANT_FLOW_METER)

  #define STATUS_FLOWMETER_WIDTH 24

  const unsigned char status_flowmeter_bmp2[] PROGMEM = {
    
  };
  const unsigned char status_flowmeter_bmp1[] PROGMEM = {
   
  };

#endif
