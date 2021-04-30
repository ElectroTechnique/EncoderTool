#pragma once

#include "Arduino.h"

inline void d_write(uint32_t pin, uint32_t val)
{
  digitalWrite(pin, val);
}

inline int d_read(uint32_t pin)
{
  return digitalRead(pin);
}

//#define PLAIN_ENC_CALLBACK