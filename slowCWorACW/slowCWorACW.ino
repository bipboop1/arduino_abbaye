#include <Servo.h>

Servo   servo360;

void setup() {
  servo360.attach(11);
  servo360.write(90);
  delay(1000);
}

void loop() {
  servo360.write(89);
  delay(10000);
  servo360.write(90);
  delay(1000);
  servo360.write(91);
  delay(10000);
  servo360.write(90);
  delay(1000);
}
