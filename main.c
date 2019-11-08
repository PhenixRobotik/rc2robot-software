#include "lowlevel/clock.h"
#include "lowlevel/gpio.h"
#include "lowlevel/uart.h"
#include "lowlevel/pwm_inputs.h"


int main() {
  // Low level setup stuff
  clock_setup();
  gpio_setup();
  uart_setup();
  pwm_inputs_setup();

  // odometry_setup();

  // asservissement();

  while (1) {};
  return 0;
}
