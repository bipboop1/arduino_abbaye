#include <Servo.h>

Servo	servo;

void setup()
{
	servo.attach(9);
	servo.write(0);
	delay(2000);
}

void loop()
{
	servo.write(0);
	delay(1000);
	
	//"natural" movement
  servo.write(20);
  delay(20);
	servo.write(40);
	delay(30);
	servo.write(50);
	delay(50);
	servo.write(60);
	delay(50);
	servo.write(70);
	delay(50);
	servo.write(75);
	delay(100);
	servo.write(80);
	delay(200);
	servo.write(85);
	delay(200);
	servo.write(90);
	delay(200);
	servo.write(93);
	delay(200);
	servo.write(96);
	delay(200);
	servo.write(99);
	delay(500);
	servo.write(100);
  delay(1000);
}
