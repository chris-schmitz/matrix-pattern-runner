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
    delay(100);
    FastLED.show();
  }
  delay(1000);
  for (int i = 0; i < _totalLeds; i++)
  {
    _matrix[i] = CRGB::Black;
    delay(100);
    FastLED.show();
  }
  delay(1000);
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
void CSMatrix::runPattern(PATTERNS pattern, uint8_t count)
{
  for (uint8_t i = 0; i < count; i++)
  {
    switch (pattern)
    {
    case PATTERN_ZIG_ZAG:
      runPatternSpacedStripes();
      break;
    case PATTERN_ARROW_UP:
      runPatternArrowUp();
      break;
    case PATTERN_PILLARS:
      runPatternPillars();
      break;
    case PATTERN_FAT_STRIPES:
      runPatternFatStripes();
      break;
    case PATTERN_SPINNER:
      runPatternSpinner();
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

void CSMatrix::runPatternSpacedStripes()
{
  for (uint8_t i = 0; i < SPACED_STRIPES_LEN; i++)
  {
    renderFrame(SPACED_STRIPES[i]);
    FastLED.show();
    delay(100);
  }
}

void CSMatrix::runPatternArrowUp()
{
  for (uint8_t i = 0; i < ARROW_UP_LEN; i++)
  {
    renderFrame(ARROW_UP[i]);
    FastLED.show();
    delay(100);
  }
}

void CSMatrix::runPatternPillars()
{
  for (uint8_t i = 0; i < PILLARS_LEN; i++)
  {
    renderFrame(PILLARS[i]);
    FastLED.show();
    delay(100);
  }
}

void CSMatrix::runPatternFatStripes()
{
  for (uint8_t i = 0; i < FAT_STRIPES_LEN; i++)
  {
    renderFrame(FAT_STRIPES[i]);
    FastLED.show();
    delay(100);
  }
}

void CSMatrix::runPatternSpinner()
{
  for (uint8_t i = 0; i < SPINNER_LEN; i++)
  {
    renderFrame(SPINNER[i]);
    FastLED.show();
    delay(300);
  }
}