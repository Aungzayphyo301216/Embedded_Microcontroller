#include <reg51.h>
void T0Delay(void);
void main (void)
{
	while(1)
		{
			P1=0x55;
			T0Delay();
			P1=0xAA;
			T0Delay();
		}
}
void T0Delay()
{
	TMOD=0X01;
	TL0=0X00;
	TH0=0X35;
	TR0=1;
	while(TF0==1);
	TR0=0;
	TF0=0;
}