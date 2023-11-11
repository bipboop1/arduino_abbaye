#include <Servo.h>

Servo   servo;

void setup() {
  servo.attach(9);
  servo.write(0);
  delay(1000);
}

void loop() {
	for (int i = 0; i < 90; i++)
	{
		servo.write(i);
		delay(20);
	}
  delay(2000);
  	for (int i = 90; i > 0; i--)
	{
		servo.write(i);
		delay(20);
	}
  delay(2000);
 
 // slowed and reverb :
  	for (int i = 0; i < 90; i++)
	{
		servo.write(i);
		delay(100);
	}
  delay(2000);
  	for (int i = 90; i > 0; i--)
	{
		servo.write(i);
		delay(100);
	}
  delay(2000);
}
