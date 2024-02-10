# IBT2

[![Licence](https://img.shields.io/badge/License-MIT-green.svg)](./LICENSE)

This library provides an easy-to-use interface for controlling the IBT2 H-Bridge Motor Driver.


## Installation

1. Download this repository as ZIP.
2. Open the Arduino IDE.
3. Go to `Sketch → Include Library → Add .ZIP Library...`.
4. Select the downloaded ZIP file and click `Open`.
5. The library is now installed. You can include it in your sketches by going to `Sketch → Include Library → IBT2`.


## Usage

1. Include the library into your project via Arduino IDE `"Sketch" → "Include Library" → "IBT2.h"` or just add the following line in your code: 
```cpp
#include <IBT2.h>
```
2. Then create an instance of the IBT2:
```cpp
IBT2 motor_1(R_PWM_PIN, L_PWM_PIN);
```

## Examples

> [!WARNING]
> Tested with DC motor (3V~6V).
> 
Go to `File → Examples → IBT2 → IBT2`
```cpp
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
```


## Methods

| Method        | Params | Description
| :------------ | :----- | :----------
| **begin**     | PWM    | enables the motor by setting the PWM
| **setPWM**    | PWM    | sets the motor PWM
| **forward**   | none   | moves the motor forward
| **backward**  | none   | moves the motor backward
| **stop**      | none   | stops the motor

## License
This project is licensed under the [MIT license](./LICENSE).
