#include <reg51.h>

void main (void)
{
	unsigned char mybyte;
	TMOD=0x20;
	TH1=-6;
	SCON=0x50;
	TR1=1;
	while(1)
	{
		while(RI==0);
		mybyte=SBUF;
		P1=mybyte;
		RI=0;
	}
}