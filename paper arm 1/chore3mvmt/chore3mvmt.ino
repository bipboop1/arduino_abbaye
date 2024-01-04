#include <Servo.h>

Servo   servo180;
int		up = 90;
int		down = 140;
int   mov = 200;

void setup()
{
  servo180.attach(9);
  servo180.write(90);
  delay(1000);
}

void loop()
{
	servo180.write(down);
	delay(400);
	servo180.write(up);
	delay(mov);
	servo180.write(down);
	delay(200);
	servo180.write(up);
	delay(mov);
	servo180.write(down);
	delay(300);
	servo180.write(up);
	delay(mov);
  servo180.write(down);
  delay(600);
  servo180.write(up);
  delay(mov);
  servo180.write(down);
	delay(400);
	servo180.write(up);
	delay(mov);
  delay(1000);

  //elton john puppet version
  for (int i = 0; i < 10; i++)
  {
    servo180.write(down);
    delay(300);
    servo180.write(up); 
    delay(200);
  }
  delay(1000);
}