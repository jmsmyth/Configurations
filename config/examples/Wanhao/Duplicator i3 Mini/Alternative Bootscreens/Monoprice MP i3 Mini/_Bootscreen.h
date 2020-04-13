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
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */
#pragma once

/**
 * Made with Marlin Bitmap Converter
 * https://marlinfw.org/tools/u8glib/converter.html
 */

#define CUSTOM_BOOTSCREEN_BMPWIDTH  96

const unsigned char custom_start_bmp[] PROGMEM = {
  B00001111,B11100000,B00000000,B11111110,B00000000,B00001111,B11100000,B00000000,B11111111,B11111111,B11111000,B00000000,
  B00001111,B11100000,B00000000,B11111110,B00000000,B00001111,B11100000,B00000000,B11111111,B11111111,B11111110,B00000000,
  B00001111,B11100000,B00000000,B11111110,B00000000,B00001111,B11100000,B00000000,B11111111,B11111111,B11111111,B00000000,
  B00001111,B11100000,B00000000,B11111110,B00000000,B00001111,B11100000,B00000000,B11111111,B11111111,B11111111,B10000000,
  B00001111,B11100000,B00000000,B11111110,B00000000,B00001111,B11100000,B00000000,B11111111,B11111111,B11111111,B11000000,
  B00001111,B11100000,B00000000,B11111110,B00000000,B00001111,B11100000,B00000000,B11111110,B00000000,B01111111,B11000000,
  B00001111,B11100000,B00000000,B11111110,B00000000,B00001111,B11100000,B00000000,B11111110,B00000000,B00111111,B11100000,
  B00001111,B11100000,B00000000,B11111110,B00000000,B00001111,B11100000,B00000000,B11111110,B00000000,B00001111,B11100000,
  B00001111,B11100000,B00000000,B11111110,B00000000,B00001111,B11100000,B00000000,B11111110,B00000000,B00000111,B11100000,
  B00001111,B11100000,B00000000,B11111110,B00000000,B00001111,B11100000,B00000000,B11111110,B00000000,B00000111,B11110000,
  B00001111,B11100000,B00000000,B11111110,B00000000,B00001111,B11100000,B00000000,B11111110,B00000000,B00000111,B11110000,
  B00001111,B11100000,B00000000,B11111110,B00000000,B00001111,B11100000,B00000000,B11111110,B00000000,B00000111,B11110000,
  B00001111,B11100000,B00000000,B11111110,B00000000,B00001111,B11100000,B00000000,B11111110,B00000000,B00000111,B11110000,
  B00001111,B11100000,B00000000,B11111110,B00000000,B00001111,B11100000,B00000000,B11111110,B00000000,B00000111,B11110000,
  B00001111,B11100000,B00000000,B11111110,B00000000,B00001111,B11100000,B00000000,B11111110,B00000000,B00001111,B11110000,
  B00001111,B11100000,B00000000,B11111110,B00000000,B00001111,B11100000,B00000000,B11111110,B00000000,B00001111,B11100000,
  B00001111,B11100000,B00000000,B11111110,B00000000,B00001111,B11100000,B00000000,B11111110,B00000000,B00011111,B11100000,
  B00001111,B11100000,B00000000,B11111110,B00000000,B00001111,B11100000,B00000000,B11111110,B00000000,B01111111,B11000000,
  B00001111,B11100000,B00000000,B11111110,B00000000,B00001111,B11100000,B00000000,B11111111,B11111111,B11111111,B11000000,
  B00001111,B11100000,B00000000,B11111110,B00000000,B00001111,B11100000,B00000000,B11111111,B11111111,B11111111,B10000000,
  B00001111,B11100000,B00000000,B11111110,B00000000,B00001111,B11100000,B00000000,B11111111,B11111111,B11111111,B00000000,
  B00001111,B11100000,B00000000,B11111110,B00000000,B00001111,B11100000,B00000000,B11111111,B11111111,B11111100,B00000000,
  B00001111,B11100000,B00000000,B11111110,B00000000,B00001111,B11100000,B00000000,B11111111,B11111111,B11111100,B00000000,
  B00001111,B11100000,B00000000,B11111110,B00000000,B00001111,B11100000,B00000000,B11111111,B11111111,B10000000,B00000000,
  B00001111,B11100000,B00000000,B11111110,B00000000,B00001111,B11100000,B00000000,B11111110,B00000000,B00000000,B00000000,
  B00001111,B11100000,B00000000,B11111110,B00000000,B00001111,B11100000,B00000000,B11111110,B00000000,B00000000,B00000000,
  B00001111,B11100000,B00000000,B11111110,B00000000,B00001111,B11100000,B00000000,B11111110,B00000000,B00000000,B00000000,
  B00001111,B11100000,B00000000,B11111110,B00000000,B00001111,B11100000,B00000000,B11111110,B00000000,B00000000,B00000000,
  B00001111,B11100000,B00000000,B11111110,B00000000,B00001111,B11100000,B00000000,B11111110,B00000000,B00000000,B00000000,
  B00001111,B11100000,B00000000,B11111110,B00000000,B00001111,B11100000,B00000000,B11111110,B00000000,B00000000,B00000000,
  B00001111,B11100000,B00000000,B11111110,B00000000,B00001111,B11100000,B00000000,B11111110,B00000000,B00000000,B00000000,
  B00001111,B11100000,B00000000,B11111110,B00000000,B00001111,B11100000,B00000000,B11111110,B00000000,B00000000,B00000000,
  B00001111,B11100000,B00000000,B11111110,B00000000,B00001111,B11100000,B00000000,B11111110,B00000000,B00000000,B00000000,
  B00001111,B11100000,B00000000,B11111110,B00000000,B00001111,B11100000,B00000000,B11111110,B00000000,B00000000,B00000000,
  B00001111,B11100000,B00000000,B11111110,B00000000,B00001111,B11100000,B00000000,B11111110,B00000000,B00000000,B00000000,
  B00001111,B11100000,B00000000,B11111110,B00000000,B00001111,B11100000,B00000000,B11111110,B00000000,B00000000,B00000000,
  B00001111,B11100000,B00000000,B11111110,B00000000,B00001111,B11100000,B00000000,B11111110,B00000000,B00000000,B00000000,
  B00001111,B11100000,B00000000,B11111110,B00000000,B00001111,B11100000,B00000000,B11111110,B00000000,B00000000,B00000000,
  B00001111,B11100000,B00000000,B11111110,B00000000,B00001111,B11100000,B00000000,B11111110,B00000000,B00000000,B00000000,
  B00001111,B11100000,B00000000,B11111110,B00000000,B00001111,B11100000,B00000000,B11111110,B00000000,B00000000,B00000000,
  B00001111,B11100000,B00000000,B11111110,B00000000,B00001111,B11100000,B00000000,B11111110,B00000000,B00000000,B00000000,
  B00001111,B11100000,B00000000,B11111110,B00000000,B00001111,B11100000,B00000000,B11111110,B00000000,B00000000,B00000000
};
