#include "cs-matrix/CSMatrix.h"
#include <Arduino.h>
#include <FastLED.h>

#define TOTAL_LEDS 64
#define BRIGHTNESS 64

CRGB leds[TOTAL_LEDS];
CSMatrix matrix = CSMatrix(leds, TOTAL_LEDS);

void setup()
{
  Serial.begin(115200);
  matrix.begin();
}

void loop()
{
  // matrix.runRandom();
  matrix.runPattern(PATTERN_ZIG_ZAG, 5, CRGB::MintCream, CRGB::Teal);
  delay(300);
  matrix.runPattern(PATTERN_ARROW_UP, 5, CRGB::Black, CRGB::DarkViolet);
  delay(300);
  matrix.runPattern(PATTERN_PILLARS, 5, CRGB::DarkOrange, CRGB::DarkRed);
  delay(300);
  matrix.runPattern(PATTERN_FAT_STRIPES, 5, CRGB::DarkViolet, CRGB::FairyLight);
  delay(300);
  matrix.runPattern(PATTERN_SPINNER, 5, CRGB::Olive, CRGB::MidnightBlue);
  delay(300);
}
