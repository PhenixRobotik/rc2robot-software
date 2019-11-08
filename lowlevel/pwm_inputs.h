#pragma once

void pwm_inputs_setup();

typedef struct {
  int period;   // microseconds ?
  int time_on;  // microseconds ?
} PWM_values;

typedef enum {
  IN1_AUX1 = 0,
  IN2_GEAR = 1,
  IN3_RUDD = 2,
  IN4_ELEV = 3,
  IN5_AILE = 4,
  IN6_THRO = 5
} Input;

PWM_values pwm_input_read(Input input);
