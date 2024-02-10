/*
  IBT2.h - Library for IBT2 H-Bridge.
  Created by Victor Carvalho, February 10, 2024.
  Released into the public domain.
*/

#include "Arduino.h"
#include "IBT2.h"

IBT2::IBT2(uint8_t r_pwm, uint8_t l_pwm)
  : _r_pwm(r_pwm), _l_pwm(l_pwm) {

  pinMode(this->_r_pwm, OUTPUT);
  pinMode(this->_l_pwm, OUTPUT);
}

void IBT2::begin(uint8_t pwm) {
  this->setPWM(pwm);
}

void IBT2::setPWM(uint8_t pwm) {
  this->_pwm = pwm;
}

void IBT2::forward() {
  this->stop();
  analogWrite(this->_r_pwm, this->_pwm);
}

void IBT2::backward() {
  this->stop();
  analogWrite(this->_l_pwm, this->_pwm);
}

void IBT2::stop() {
  analogWrite(this->_r_pwm, 0);
  analogWrite(this->_l_pwm, 0);
}