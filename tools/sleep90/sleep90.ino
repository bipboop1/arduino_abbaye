#include <Servo.h>

Servo	servo;
Servo servo2;

void setup()
{
	servo.attach(9);
	servo.write(90);
	servo2.attach(10);
	servo2.write(90);
	delay(2000);

}

void loop()
{
	delay(1000);
}
