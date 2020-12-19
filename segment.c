#include <stdio.h>
#include <wiringPi.h>
#include "segment.h"

int init_seg(void){
	wiringPiSetup();

	pinMode(dp,OUTPUT);
	pinMode(a, OUTPUT);
	pinMode(b, OUTPUT);
	pinMode(c, OUTPUT);
	pinMode(d, OUTPUT);
	pinMode(e, OUTPUT);
	pinMode(f, OUTPUT);
	pinMode(g, OUTPUT);
	
	digitalWrite(a, HIGH);
	digitalWrite(b, HIGH);
	digitalWrite(c, HIGH);
	digitalWrite(d, HIGH);
	digitalWrite(e, HIGH);
	digitalWrite(f, HIGH);
	digitalWrite(g, HIGH);
	digitalWrite(dp, HIGH);
	return 0;
}
int control_seg(int num){
	switch(num){
	case 0:
		digitalWrite(a, LOW);
		digitalWrite(b, LOW);
		digitalWrite(c, LOW);
		digitalWrite(d, LOW);
		digitalWrite(e, LOW);
		digitalWrite(f, LOW);
		digitalWrite(g, HIGH);
		break;
	case 1:
		digitalWrite(a, HIGH);
		digitalWrite(b, LOW);
		digitalWrite(c, LOW);
		digitalWrite(d, HIGH);
		digitalWrite(e, HIGH);
		digitalWrite(f, HIGH);
		digitalWrite(g, HIGH);
		break;
	case 2:
		digitalWrite(a, LOW);
		digitalWrite(b, LOW);
		digitalWrite(c, HIGH);
		digitalWrite(d, LOW);
		digitalWrite(e, LOW);
		digitalWrite(f, HIGH);
		digitalWrite(g, LOW);
		break;
	case 3:
		digitalWrite(a, LOW);
		digitalWrite(b, LOW);
		digitalWrite(c, LOW);
		digitalWrite(d, LOW);
		digitalWrite(e, HIGH);
		digitalWrite(f, HIGH);
		digitalWrite(g, LOW);
		break;
	case 4:
		digitalWrite(a, HIGH);
		digitalWrite(b, LOW);
		digitalWrite(c, LOW);
		digitalWrite(d, HIGH);
		digitalWrite(e, HIGH);
		digitalWrite(f, LOW);
		digitalWrite(g, LOW);
		break;
	case 5:
		digitalWrite(a, LOW);
		digitalWrite(b, HIGH);
		digitalWrite(c, LOW);
		digitalWrite(d, LOW);
		digitalWrite(e, HIGH);
		digitalWrite(f, LOW);
		digitalWrite(g, LOW);
		break;
	case 6:
		digitalWrite(a, LOW);
		digitalWrite(b, HIGH);
		digitalWrite(c, LOW);
		digitalWrite(d, LOW);
		digitalWrite(e, LOW);
		digitalWrite(f, LOW);
		digitalWrite(g, LOW);
		break;
	case 7:
		digitalWrite(a, LOW);
		digitalWrite(b, LOW);
		digitalWrite(c, LOW);
		digitalWrite(d, HIGH);
		digitalWrite(e, HIGH);
		digitalWrite(f, HIGH);
		digitalWrite(g, HIGH);
		break;
	case 8:
		digitalWrite(a, LOW);
		digitalWrite(b, LOW);
		digitalWrite(c, LOW);
		digitalWrite(d, LOW);
		digitalWrite(e, LOW);
		digitalWrite(f, LOW);
		digitalWrite(g, LOW);
		break;
	case 9:
		digitalWrite(a, LOW);
		digitalWrite(b, LOW);
		digitalWrite(c, LOW);
		digitalWrite(d, LOW);
		digitalWrite(e, HIGH);
		digitalWrite(f, LOW);
		digitalWrite(g, LOW);
		break;
	case 10:
		digitalWrite(a, HIGH);
		digitalWrite(b, HIGH);
		digitalWrite(c, HIGH);
		digitalWrite(d, HIGH);
		digitalWrite(e, HIGH);
		digitalWrite(f, HIGH);
		digitalWrite(g, HIGH);
		break;
	default:
		digitalWrite(a, HIGH);
		digitalWrite(b, HIGH);
		digitalWrite(c, HIGH);
		digitalWrite(d, HIGH);
		digitalWrite(e, HIGH);
		digitalWrite(f, HIGH);
		digitalWrite(g, HIGH);
		digitalWrite(dp, HIGH);
	}
	return 0;
}
int control_dp(int bool){
	if(bool == HIGH)
	{
		digitalWrite(dp, LOW);
	}
	else
	{
		digitalWrite(dp, HIGH);
	}
	return 0;
}
