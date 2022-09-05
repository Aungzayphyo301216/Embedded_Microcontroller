#include <reg51.h>
void T1M1delay(void);
void main(void)
{
	unsigned char x;
	P2=0x55;
	while(1)
	{
		P2=~P2;
		for (x=0;x<20;x++)
		T1M1delay();
	}
}
void T1M1delay()
{
TMOD=0x01;
	TL1=0xFE;
	TH1=0xA5;
	TR1=1;
	while(TF1==0);
	TF1=0;
	TR1=0;
}