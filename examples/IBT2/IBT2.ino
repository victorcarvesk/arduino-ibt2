#include "IBT2.h"

#define r_pwm 5
#define l_pwm 6

#define max_pwm 10

IBT2 motor_1(r_pwm, l_pwm);

void setup() {
  motor_1.begin(max_pwm);
}

void loop() {
  motor_1.forward();
  delay(2000);
  motor_1.stop();
  delay(2000);
  motor_1.backward();
  delay(2000);
  motor_1.stop();
  delay(2000);
}
