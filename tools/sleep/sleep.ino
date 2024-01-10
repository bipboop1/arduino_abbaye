#include <Servo.h>

Servo	servo;

void setup()
{
	servo.attach(9);
	servo.write(90);
	delay(2000);
}

void loop()
{
	delay(1000);
}
