#ifndef CS_HELPERS_H
#define CS_HELPERS_H
#include <Arduino.h>

byte reverseByte(byte b)
{
  byte reversed = 0;
  for (uint8_t i = 0; i < 8; i++)
  {
    reversed <<= 1;
    reversed += (_BV(i) & b) > 0;
  }
  return reversed;
}
#endif