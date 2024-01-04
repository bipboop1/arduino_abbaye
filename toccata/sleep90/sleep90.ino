#include <Servo.h>

Servo	servor;
Servo servol;

void setup()
{
	servor.attach(9);
	servor.write(90);
  servol.attach(10);
  servol.write(90);
	delay(2000);
}

void loop()
{
	delay(1000);
}
