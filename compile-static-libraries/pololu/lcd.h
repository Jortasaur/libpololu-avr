/*
  OrangutanLCD.h - Library for using the LCD on the Orangutan LV-168
  Originally written by Tom Benedict as part of Orangutan-Lib.
  Modified by Ben Schmidel, May 14, 2008.
  Released into the public domain.
*/
#ifndef OrangutanLCD_h
#define OrangutanLCD_h

#include <avr/pgmspace.h>

void lcd_init_printf();
void clear();
void print(const char *str);
void print_character(char c);
void print_long(long value);
void lcd_goto_xy(int col, int row);
void load_custom_character(const PROGMEM char *picture, unsigned char number);

#endif
