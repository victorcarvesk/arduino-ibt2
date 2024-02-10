/*
  IBT2.h - Library for IBT2 H-Bridge.
  Created by Victor Carvalho, February 10, 2024.
  Released into the public domain.
*/
#ifndef IBT2_h
#define IBT2_h

#include "Arduino.h"

class IBT2 {
public:
  IBT2(uint8_t r_pwm, uint8_t l_pwm);
  void begin(uint8_t pwm);
  void setPWM(uint8_t pwm);
  void forward();
  void backward();
  void stop();

private:
  uint8_t _r_pwm;
  uint8_t _l_pwm;
  uint8_t _pwm{ 0 };
};

#endif
