#ifndef CHARS3X8_H
#define CHARS3X8_H

#ifdef __AVR__
 #include <avr/io.h>
 #include <avr/pgmspace.h>
#else
 #define PROGMEM
#endif

// binary words (B00000..)
#include "binary.h" 

static const uint8_t chars3x8[] PROGMEM = 
{
	3,
	8,
	B11111110, B11011011, B01111111,
	B11011001, B00100100, B10111111,
	B11111100, B11111111, B00111111,
	B11111100, B10110110, B01111111,
	B10110110, B11111110, B01001001, 
	B11111110, B01111110, B01111111,
	B11111110, B01111111, B01111111, 
	B11111100, B10010010, B01001001,
	B11111110, B11111111, B01111111,
	B11111110, B11111110, B01111111
};
#endif // CHARS3X8_H