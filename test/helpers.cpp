#include "../src/helpers.h"
#include <Arduino.h>
#include <unity.h>

void test_reverseByte(void)
{
  byte testByte = 0b11001100;
  byte expected = 0b00110011;

  byte actual = reverseByte(testByte);

  TEST_ASSERT_EQUAL(expected, actual);
}

void setup()
{
  delay(2000);
  UNITY_BEGIN();
  RUN_TEST(test_reverseByte);
}

void loop()
{
  UNITY_END();
}