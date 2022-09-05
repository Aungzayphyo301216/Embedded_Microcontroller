#include <reg51.h>

sbit T1=P3^5;
void main (void)
{
	T1=1;
	TMOD=0x60;
	TH1=0;
	while (1)
	{
		do {
					TR1=1;
					P1=TL1;
				}
		while(TF1==0);
				TR1=0;
				TF1=0;
	}
}