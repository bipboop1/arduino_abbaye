#include <Servo.h>

Servo	servo;

void setup() {
  // put your setup code here, to run once:
  servo.attach(9);
  servo.write(0);
  delay(2000);

}

void loop() {
  // put your main code here, to run repeatedly:
  servo.write(180);
  delay(100);
  servo.write(0);
  delay(100);
  servo.write(50);
  delay(50);
  servo.write(60);
  delay(1000);
  servo.write(150);
  delay(80);
  servo.write(180);
  delay(10);
  servo.write(40);
  delay(200);
  servo.write(135);
  delay(1000);
  servo.write(0);
  delay(100);
  servo.write(50);
  delay(50);
  servo.write(60);
  delay(1);
  servo.write(150);
  delay(80);
  servo.write(180);
  delay(10);
  servo.write(40);
  delay(200);
  servo.write(135);
  delay(100);
  servo.write(0);
  delay(100);
  servo.write(140);
  delay(1500);
}
