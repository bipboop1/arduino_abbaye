#include <Servo.h>

Servo 	head;
int		i = 0;
int		j = 0;
int		down = 130;
int		up = 90;
int		dly = 10;
int		tempo = 500;

void	setup()
{
	head.attach(12);
	head.write(90);
	delay(1000);
}

void	loop()
{
	i = 0;
	j = down;
	while (i++ <= 10)
	{
		head.write(j++);
		delay(i);
	}
	delay(tempo);
}
