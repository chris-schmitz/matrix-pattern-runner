#ifndef CS_PATTERNS_H
#define CS_PATTERNS_H
// * Stripes

#include <Arduino.h>

// const byte ZIG_ZAG[][8] = {
//     {0b00000000,
//      0b00000000,
//      0b00000000,
//      0b00000000,
//      0b00000000,
//      0b00000000,
//      0b00000000,
//      0b00000000},
//     {0b00110011,
//      0b01100110,
//      0b11001100,
//      0b10011001,
//      0b00110011,
//      0b01100110,
//      0b11001100,
//      0b10011001},
//     {0b11001100,
//      0b10011001,
//      0b00110011,
//      0b01100110,
//      0b11001100,
//      0b10011001,
//      0b00110011,
//      0b01100110}};
// const int ZIG_ZAG_LEN = sizeof(ZIG_ZAG) / 8;

// spaced Stripes
const byte SPACED_STRIPES[][8] = {
    {0b11000110,
     0b10001100,
     0b00011000,
     0b00110001,
     0b01100011,
     0b11000110,
     0b10001100,
     0b00011000},
    {0b01100011,
     0b11000110,
     0b10001100,
     0b00011000,
     0b00110001,
     0b01100011,
     0b11000110,
     0b10001100},
    {0b00110001,
     0b01100011,
     0b11000110,
     0b10001100,
     0b00011000,
     0b00110001,
     0b01100011,
     0b11000110},
    {0b00011000,
     0b00110001,
     0b01100011,
     0b11000110,
     0b10001100,
     0b00011000,
     0b00110001,
     0b01100011},
    {0b10001100,
     0b00011000,
     0b00110001,
     0b01100011,
     0b11000110,
     0b10001100,
     0b00011000,
     0b00110001}};
const int SPACED_STRIPES_LEN = sizeof(SPACED_STRIPES) / 8;

// arrow up
const byte ARROW_UP[][8] = {
    {0b00000000,
     0b00000000,
     0b00000000,
     0b00000000,
     0b00000000,
     0b00000000,
     0b00000000,
     0b00011000},
    {0b00000000,
     0b00000000,
     0b00000000,
     0b00000000,
     0b00000000,
     0b00000000,
     0b00011000,
     0b00111100},
    {0b00000000,
     0b00000000,
     0b00000000,
     0b00000000,
     0b00000000,
     0b00011000,
     0b00111100,
     0b01100110},
    {0b00000000,
     0b00000000,
     0b00000000,
     0b00000000,
     0b00011000,
     0b00111100,
     0b01100110,
     0b11011011},
    {0b00000000,
     0b00000000,
     0b00000000,
     0b00011000,
     0b00111100,
     0b01100110,
     0b11011011,
     0b00000000},
    {0b00000000,
     0b00000000,
     0b00011000,
     0b00111100,
     0b01100110,
     0b11011011,
     0b00000000,
     0b00000000},
    {0b00000000,
     0b00011000,
     0b00111100,
     0b01100110,
     0b11011011,
     0b00000000,
     0b00000000,
     0b00000000},
    {0b00011000,
     0b00111100,
     0b01100110,
     0b11011011,
     0b00000000,
     0b00000000,
     0b00000000,
     0b00000000},
    {0b00111100,
     0b01100110,
     0b11011011,
     0b00000000,
     0b00000000,
     0b00000000,
     0b00000000,
     0b00000000},
    {0b01100110,
     0b11011011,
     0b00000000,
     0b00000000,
     0b00000000,
     0b00000000,
     0b00000000,
     0b00000000},
    {0b11011011,
     0b00000000,
     0b00000000,
     0b00000000,
     0b00000000,
     0b00000000,
     0b00000000,
     0b00000000}};
const int ARROW_UP_LEN = sizeof(ARROW_UP) / 8;

// pillars
const byte PILLARS[][8] = {
    {0b01010101,
     0b00000000,
     0b00000000,
     0b00000000,
     0b00000000,
     0b00000000,
     0b00000000,
     0b10101010},
    {0b01010101,
     0b01010101,
     0b00000000,
     0b00000000,
     0b00000000,
     0b00000000,
     0b10101010,
     0b10101010},
    {0b01010101,
     0b01010101,
     0b01010101,
     0b00000000,
     0b00000000,
     0b10101010,
     0b10101010,
     0b10101010},
    {0b01010101,
     0b01010101,
     0b01010101,
     0b01010101,
     0b10101010,
     0b10101010,
     0b10101010,
     0b10101010},
    {0b01010101,
     0b01010101,
     0b01010101,
     0b11111111,
     0b11111111,
     0b10101010,
     0b10101010,
     0b10101010},
    {0b01010101,
     0b01010101,
     0b11111111,
     0b11111111,
     0b11111111,
     0b11111111,
     0b10101010,
     0b10101010},
    {0b01010101,
     0b11111111,
     0b11111111,
     0b11111111,
     0b11111111,
     0b11111111,
     0b11111111,
     0b10101010},
    {0b11111111,
     0b11111111,
     0b11111111,
     0b11111111,
     0b11111111,
     0b11111111,
     0b11111111,
     0b11111111},
    {0b10101010,
     0b11111111,
     0b11111111,
     0b11111111,
     0b11111111,
     0b11111111,
     0b11111111,
     0b01010101},
    {0b10101010,
     0b10101010,
     0b11111111,
     0b11111111,
     0b11111111,
     0b11111111,
     0b01010101,
     0b01010101},
    {0b10101010,
     0b10101010,
     0b10101010,
     0b11111111,
     0b11111111,
     0b01010101,
     0b01010101,
     0b01010101},
    {0b10101010,
     0b10101010,
     0b10101010,
     0b10101010,
     0b01010101,
     0b01010101,
     0b01010101,
     0b01010101},
    {0b10101010,
     0b10101010,
     0b10101010,
     0b00000000,
     0b00000000,
     0b01010101,
     0b01010101,
     0b01010101},
    {0b10101010,
     0b10101010,
     0b00000000,
     0b00000000,
     0b00000000,
     0b00000000,
     0b01010101,
     0b01010101},
    {0b10101010,
     0b00000000,
     0b00000000,
     0b00000000,
     0b00000000,
     0b00000000,
     0b00000000,
     0b01010101},
    {0b00000000,
     0b00000000,
     0b00000000,
     0b00000000,
     0b00000000,
     0b00000000,
     0b00000000,
     0b00000000}};
const int PILLARS_LEN = sizeof(PILLARS) / 8;

// fat Stripes
const byte FAT_STRIPES[][8] = {
    {0b00000001,
     0b00000011,
     0b00000111,
     0b00001111,
     0b00011111,
     0b00111111,
     0b01111111,
     0b11111111},
    {0b10000000,
     0b00000001,
     0b00000011,
     0b00000111,
     0b00001111,
     0b00011111,
     0b00111111,
     0b01111111},
    {0b11000000,
     0b10000000,
     0b00000001,
     0b00000011,
     0b00000111,
     0b00001111,
     0b00011111,
     0b00111111},
    {0b11100000,
     0b11000000,
     0b10000000,
     0b00000001,
     0b00000011,
     0b00000111,
     0b00001111,
     0b00011111},
    {0b11110000,
     0b11100000,
     0b11000000,
     0b10000000,
     0b00000001,
     0b00000011,
     0b00000111,
     0b00001111},
    {0b11111000,
     0b11110000,
     0b11100000,
     0b11000000,
     0b10000000,
     0b00000001,
     0b00000011,
     0b00000111},
    {0b11111100,
     0b11111000,
     0b11110000,
     0b11100000,
     0b11000000,
     0b10000000,
     0b00000001,
     0b00000011},
    {0b11111110,
     0b11111100,
     0b11111000,
     0b11110000,
     0b11100000,
     0b11000000,
     0b10000000,
     0b00000001},
    {0b11111111,
     0b11111110,
     0b11111100,
     0b11111000,
     0b11110000,
     0b11100000,
     0b11000000,
     0b10000000},
    {0b01111111,
     0b11111111,
     0b11111110,
     0b11111100,
     0b11111000,
     0b11110000,
     0b11100000,
     0b11000000},
    {0b00111111,
     0b01111111,
     0b11111111,
     0b11111110,
     0b11111100,
     0b11111000,
     0b11110000,
     0b11100000},
    {0b00011111,
     0b00111111,
     0b01111111,
     0b11111111,
     0b11111110,
     0b11111100,
     0b11111000,
     0b11110000},
    {0b00001111,
     0b00011111,
     0b00111111,
     0b01111111,
     0b11111111,
     0b11111110,
     0b11111100,
     0b11111000},
    {0b00000111,
     0b00001111,
     0b00011111,
     0b00111111,
     0b01111111,
     0b11111111,
     0b11111110,
     0b11111100},
    {0b00000011,
     0b00000111,
     0b00001111,
     0b00011111,
     0b00111111,
     0b01111111,
     0b11111111,
     0b11111110}};
const int FAT_STRIPES_LEN = sizeof(FAT_STRIPES) / 8;

// spinner
const byte SPINNER[][8] = {
    {0b00000000,
     0b00000000,
     0b00000000,
     0b00001000,
     0b00010000,
     0b00000000,
     0b00000000,
     0b00000000},
    {0b00000000,
     0b00000000,
     0b00100000,
     0b00010000,
     0b00001000,
     0b00000100,
     0b00000000,
     0b00000000},
    {0b00000000,
     0b00000010,
     0b00000100,
     0b00001000,
     0b00010000,
     0b00100000,
     0b01000000,
     0b00000000},
    {0b10000000,
     0b01000000,
     0b00100000,
     0b00010000,
     0b00001000,
     0b00000100,
     0b00000010,
     0b00000001},
    {0b00000000,
     0b00000010,
     0b00000100,
     0b00001000,
     0b00010000,
     0b00100000,
     0b01000000,
     0b00000000},
    {0b00000000,
     0b00000000,
     0b00100000,
     0b00010000,
     0b00001000,
     0b00000100,
     0b00000000,
     0b00000000},
    {0b00000000,
     0b00000000,
     0b00000000,
     0b00001000,
     0b00010000,
     0b00000000,
     0b00000000,
     0b00000000},
    {0b00000000,
     0b00000000,
     0b00000000,
     0b00010000,
     0b00001000,
     0b00000000,
     0b00000000,
     0b00000000}};
const int SPINNER_LEN = sizeof(SPINNER) / 8;

#endif