#include <Servo.h>

Servo	servo;

void	setup()
{
  servo.attach(9);
  servo.write(0);
  delay(1000);
}

void	loop()
{
	for (int i = 0; i < 180; i++)
	{
		servo.write(i);
		delay(15);
	}
	delay(1000);
	for (int i = 180; i > 0; i--)
	{
		servo.write(i);
		delay(15);
	}
	delay(1000);
	for (int i = 0; i < 90; i++)
	{
		servo.write(i);
		delay(20);
	}
}

// 180*15 = 2700ms = 2.7s
// nice, thx copilot
// 90*20 = 1800ms = 1.8s
