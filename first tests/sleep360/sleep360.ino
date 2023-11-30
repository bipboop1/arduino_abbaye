#include <Servo.h>

Servo   servo360;

void setup() {
  servo360.attach(11);
  servo360.write(90);
  delay(1000);
}

void loop()
{

}