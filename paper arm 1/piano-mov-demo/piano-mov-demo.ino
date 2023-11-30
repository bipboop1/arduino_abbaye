#include <Servo.h>

Servo   servo180;
Servo   servo360;

void setup() {
servo180.attach(9);
servo180.write(90);
delay(1000);
servo360.attach(11);
servo360.write(90);
delay(1000);
}

void loop() {

servo180.write(90);
delay(1000);
servo180.write(100);
delay(1000);
servo180.write(90);
delay(1000);

//slow movement test
servo180.write(90);
for (int i = 90; i > 50; i--)
{
  servo180.write(i);
  delay(100);
}
delay(1000);
for (int i = 50; i < 90; i++)
{
  servo180.write(i);
  delay(80);
}
delay(1000);

//up down movement
servo360.write(80);
delay(1000);
servo360.write(90);
delay(1000);
servo360.write(100);
delay(1100);
servo360.write(90);
delay(1000);
delay(10000);
}
