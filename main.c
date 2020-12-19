#include <stdio.h>
#include <wiringPi.h>
#include "segment.h"
#define GREEN 25
#define RED 29

int init_all(void){
	init_seg();
	pinMode(RED, OUTPUT);
	pinMode(GREEN, OUTPUT);
	digitalWrite(GREEN, LOW);
	digitalWrite(RED, LOW);
	for(int i =0; i<3; i++)
	{
		control_dp(HIGH);
		control_seg(8);
		digitalWrite(RED, HIGH);
		digitalWrite(GREEN, HIGH);
		delay(250);
		control_dp(LOW);
		control_seg(10);
		digitalWrite(RED, LOW);
		digitalWrite(GREEN, LOW);
		delay(250);
	}
	return 0;
}

int main(void)
{
	init_all();	


	



	return 0;
}
