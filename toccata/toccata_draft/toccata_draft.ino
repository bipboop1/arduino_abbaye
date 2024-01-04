#include <Servo.h>

Servo	servo180r;
Servo	servo180l;
int		lowup = 65;
int		hup = 35;
int		down = 90;
int		mvmt = 200;

void  setup()
{
  servo180r.attach(9);
  servo180l.attach(10);
  servo180r.write(90);
  servo180l.write(90);
  delay(1000);
}

void	bothlowup() // both arms low up then down at the same time
{
	servo180r.write(lowup);
	servo180l.write(lowup);
	delay(mvmt);
	servo180r.write(down);
	servo180l.write(down);
  delay(100);
}

void	bothhup() // both arms high up then down at the same time
{
	servo180r.write(lowup);
	servo180l.write(lowup);
	delay(mvmt);
	servo180r.write(down);
	servo180l.write(down);
  delay(100);
}

void  rlowup()
{
  servo180r.write(lowup);
  delay(mvmt);
  servo180r.write(down);
  delay(100);
}

void  llowup()
{
  servo180l.write(lowup);
  delay(mvmt);
  servo180l.write(down);
  delay(100);
}

void  rhup()
{
  servo180r.write(hup);
  delay(mvmt);
  servo180r.write(down);
  delay(100);
}

void  lhup()
{
  servo180l.write(hup);
  delay(mvmt);
  servo180l.write(down);
  delay(100);
}

void	loop()
{
	servo180r.write(lowup);
	servo180l.write(lowup);
	delay(mvmt);
	servo180r.write(down);
	servo180l.write(down);
	delay(500);
	servo180r.write(hup);
	servo180l.write(hup);
	delay(mvmt);
	servo180r.write(down);
	servo180l.write(down);
	delay(500);
	delay(5000);
	bothlowup();
	delay(500);
  bothhup();
	delay(500);
	bothlowup();
  delay(300);
  bothlowup();
  delay(300);
  bothlowup();
  delay(300);
  bothlowup();
  delay(300);
  rlowup();
  lhup();
  delay(200);
  rhup();
  rhup();
  llowup;
  delay(300);
  rhup();
  delay(200);
  rhup();
  llowup();
  rlowup();
  delay(150);
  rhup();
  llowup();
  delay(500);
  lhup();
  rhup();
  delay(3000);
}
