//Write an 8051 c program to toggle only bit P1.5 continuously 
//Use timer 0, mode 1 (16 bit) to create the delay.Test the program
//on the (a)AT89C51 and (b) DS89C420.

#include <reg51.h>
void T01Delay(void);
sbit mybit=P1^5;
void main (void)
{
	while(1)
	{
		mybit=~mybit;
		T01Delay();
	}
}
void T01Delay()
{
	TMOD=	0x01;
	TL0=0xFD;
	TH0=0x4B;
	TR0=1;
	while(TF0==0);
	TR0=0;
	TF0=0;
}