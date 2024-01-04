#include <Servo.h>

Servo   servo180;
int		up = 90;
int		down = 140;

void setup()
{
  servo180.attach(9);
  servo180.write(90);
  delay(1000);
}

void loop()
{
  for (int i = 0; i < 10; i++)
  {
    servo180.write(down);
    delay(300);
    servo180.write(up); 
    delay(200);
  }
    for (int i = 0; i < 4; i++)
  {
    servo180.write(down);
    delay(100);
    servo180.write(up); 
    delay(50);
  }
    for (int i = 0; i < 4; i++)
  {
    servo180.write(down);
    delay(400);
    servo180.write(up); 
    delay(200);
  }
    for (int i = 0; i < 3; i++)
  {
    servo180.write(down);
    delay(300);
    servo180.write(up); 
    delay(200);
  }
      for (int i = 0; i < 8; i++)
  {
    servo180.write(down);
    delay(100);
    servo180.write(up); 
    delay(50);
  }
      for (int i = 0; i < 4; i++)
  {
    servo180.write(down);
    delay(300);
    servo180.write(up); 
    delay(200);
  }
  delay(1000);
}