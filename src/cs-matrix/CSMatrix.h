#ifndef CSMATRIX_H
#define CSMATRIX_H

#include <FastLED.h>

#define LED_PIN 12

enum PATTERNS
{
  PATTERN_ZIG_ZAG,
  PATTERN_ARROW_UP,
  PATTERN_PILLARS,
  PATTERN_FAT_STRIPES,
  PATTERN_SPINNER,
  PATTERN_PEAK_AND_VALLEY,
  PATTERN_SHOOTING_STARS,
  PATTERN_RINGS,
  PATTERN_RETICLE
};

class CSMatrix
{
public:
  CSMatrix(CRGB *matrix, int totalLeds)
  {
    _matrix = matrix;
    _totalLeds = totalLeds;
  }

  void begin()
  {
    FastLED.addLeds<WS2811, LED_PIN, RGB>(_matrix, _totalLeds);
  }

  void runRandom();
  void setOnColor(CRGB color);
  void setOffColor(CRGB color);
  void runPattern(PATTERNS pattern);
  void runPattern(PATTERNS pattern, CRGB onColor, CRGB offColor);
  void runPattern(PATTERNS pattern, uint8_t count);
  void runPattern(PATTERNS pattern, uint8_t count, CRGB onColor, CRGB offColor);

private:
  int _totalLeds;
  CRGB *_matrix;
  CRGB _onColor = CRGB::Magenta;
  CRGB _offColor = CRGB::DarkGray;

  void renderFrame(const byte *frame);
  void renderRow(uint8_t row, byte rowState);

  void runTwoColorPattern(const byte *frames, const int length, int delayDuration);
};

#endif