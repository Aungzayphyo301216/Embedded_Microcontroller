//Write an 8051 in C program to transfer the message"yes" serially at 9600 baud , 8 bit data , 1 stop bit.
//Do this cotinuously.

#include <reg51.h>
void ser_tx(unsigned char );

void main (void)
{
	TMOD=0x20;
	TH1=-3;
	SCON=0x50;
	TR1=1;
	while(1)
	{
		ser_tx('Y');
		ser_tx('E');
		ser_tx('S');
	}
}

void ser_tx(unsigned char x)
{
	SBUF=x;
	while(TI==0);
	TI=0;
}