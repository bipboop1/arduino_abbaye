#include <Servo.h>

Servo 	servo360;

void setup() {
	servo360.attach(11);
	servo360.write(90);
	delay(1000);
}

void loop() {
	servo360.write(50);
	delay(3000);
	servo360.write(90);
	delay(1000);
	servo360.write(135);
	delay(3000);
}
