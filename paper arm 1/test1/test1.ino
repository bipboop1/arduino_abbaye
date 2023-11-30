#include <Servo.h>

Servo   servo9;

void setup() {
servo9.attach(9);
servo9.write(0);
delay(1000);
}

void loop() {
servo9.write(0);
delay(2000);
servo9.write(90);
delay(2000);
servo9.write(200);
delay(2000);
}
