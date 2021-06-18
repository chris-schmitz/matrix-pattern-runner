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
  matrix.runPattern(PATTERN_RINGS, 3, CRGB::DeepSkyBlue, CRGB::DarkMagenta);
  delay(300);
  matrix.runPattern(PATTERN_SHOOTING_STARS, 2, CRGB::Black, CRGB(10, 10, 10));
  delay(300);
  matrix.runPattern(PATTERN_SHOOTING_STARS, 2, CRGB::Fuchsia, CRGB(10, 10, 10));
  delay(300);
  matrix.runPattern(PATTERN_PEAK_AND_VALLEY, 5, CRGB::Silver, CRGB::Teal);
  delay(300);
  matrix.runPattern(PATTERN_ZIG_ZAG, 7, CRGB::Navy, CRGB::WhiteSmoke);
  delay(300);
  matrix.runPattern(PATTERN_ARROW_UP, 2, CRGB::Black, CRGB::DarkViolet);
  delay(300);
  matrix.runPattern(PATTERN_RETICLE, 3, CRGB::Chocolate, CRGB(1, 1, 1));
  delay(300);
  matrix.runPattern(PATTERN_PILLARS, 5, CRGB::DarkRed, CRGB::Black);
  delay(300);
  matrix.runPattern(PATTERN_FAT_STRIPES, 5, CRGB::DarkViolet, CRGB::FairyLight);
  delay(300);
  matrix.runPattern(PATTERN_SPINNER, 3, CRGB::Olive, CRGB::MidnightBlue);
  delay(300);
}
