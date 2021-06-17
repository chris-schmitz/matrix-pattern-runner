#include "CSMatrix.h"
#include "helpers.h"
#include "patterns.h"

CRGB getRandomColor()
{
  return CRGB(random(0, 255), random(0, 255), random(0, 255));
}

void CSMatrix::setOnColor(CRGB color)
{
  _onColor = color;
}

void CSMatrix::setOffColor(CRGB color)
{
  _offColor = color;
}

void CSMatrix::runRandom()
{
  for (int i = 0; i < _totalLeds; i++)
  {
    _matrix[i] = getRandomColor();
    delay(50);
    FastLED.show();
  }
  for (int i = 0; i < _totalLeds; i++)
  {
    _matrix[i] = CRGB::Black;
    delay(50);
    FastLED.show();
  }
}

void CSMatrix::runPattern(PATTERNS pattern)
{
  runPattern(pattern, 1);
}

void CSMatrix::runPattern(PATTERNS pattern, CRGB onColor, CRGB offColor)
{
  runPattern(pattern, 1, onColor, offColor);
}

void CSMatrix::runPattern(PATTERNS pattern, uint8_t count, CRGB onColor, CRGB offColor)
{
  _onColor = onColor;
  _offColor = offColor;

  runPattern(pattern, count);
}
void CSMatrix::runPattern(PATTERNS pattern, uint8_t totalRuns)
{
  for (uint8_t i = 0; i < totalRuns; i++)
  {
    switch (pattern)
    {
    case PATTERN_ZIG_ZAG:
      runTwoColorPattern(SPACED_STRIPES, SPACED_STRIPES_LEN, 100);
      // runPatternSpacedStripes();
      break;
    case PATTERN_ARROW_UP:
      runTwoColorPattern(ARROW_UP, ARROW_UP_LEN, 100);
      break;
    case PATTERN_PILLARS:
      runTwoColorPattern(PILLARS, PILLARS_LEN, 100);
      break;
    case PATTERN_FAT_STRIPES:
      runTwoColorPattern(FAT_STRIPES, FAT_STRIPES_LEN, 100);
      break;
    case PATTERN_SPINNER:
      runTwoColorPattern(SPINNER, SPINNER_LEN, 100);
      break;
    case PATTERN_PEAK_AND_VALLEY:
      runTwoColorPattern(PEAK_AND_VALLEY, PEAK_AND_VALLEY_LEN, 100);
      break;
    }
  }
}

void CSMatrix::renderFrame(const byte *frame)
{
  for (uint8_t i = 0; i < 8; i++)
  {
    byte state = frame[i];
    if (i % 2 != 0)
    {
      state = reverseByte(frame[i]);
    }

    renderRow(i, state);
  }
}

void CSMatrix::renderRow(uint8_t row, byte rowState)
{
  for (uint8_t i = 0; i < 8; i++)
  {
    boolean currentBit = (_BV(i) & rowState) > 0;
    // Serial.print("current bit: ");
    // Serial.print(currentBit);
    // Serial.print(", row: ");
    // Serial.print(row * 8);
    // Serial.print(", pixel: ");
    // Serial.println((row * 8) + i);
    if (currentBit)
    {
      _matrix[(row * 8) + i] = _onColor;
    }
    else
    {
      _matrix[(row * 8) + i] = _offColor;
    }
  }
}

void CSMatrix::runTwoColorPattern(const byte *frames, const int length, int delayDuration)
{
  for (uint8_t i = 0; i < length; i++)
  {
    Serial.println(i);
    renderFrame(&frames[i * 8]);
    FastLED.show();
    delay(delayDuration);
  }
}
