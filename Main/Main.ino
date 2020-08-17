/*
  Servo Signal Frequency Pulse Generator

  Create PWM signal pulses with set amplitude and frequency
*/

#include <Servo.h>


float freq = 0.9;

float time = 1 / freq;

float time_ms = time*1000;
float on_time_ms = 400;
float off_time_ms = time_ms - on_time_ms;


Servo esc;  // create servo object to control a servo

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  esc.attach(11);
  esc.writeMicroseconds(980);
  delay(2000);
}

// the loop function runs over and over again forever
void loop() {
  esc.writeMicroseconds(980);
  delay(off_time_ms);
  esc.writeMicroseconds(1800);
  delay(on_time_ms);                       
}
