#pragma once

#include "Arduino.h"
namespace EncoderTool
{
    class Pin
    {
     public:
        Pin(uint_fast8_t _pin) : pin(_pin) {}
        void set() const { digitalWrite(pin, HIGH); }
        void clear() const { digitalWrite(pin, LOW); }
        uint_fast8_t get() const { return digitalRead(pin); }

     protected:
        const uint8_t pin;
    };
};

inline void d_write(uint32_t pin, uint32_t val)
{
    digitalWrite(pin, val);
}

inline int d_read(uint32_t pin)
{
    return digitalRead(pin);
}