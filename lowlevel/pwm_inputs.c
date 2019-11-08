#include "pwm_inputs.h"

PWM_values values[6];

void pwm_inputs_setup() {

}


PWM_values pwm_input_read(Input input) {
  return values[input];
}
