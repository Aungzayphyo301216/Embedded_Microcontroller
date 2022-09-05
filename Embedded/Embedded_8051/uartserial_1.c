#include <reg51.h>
void main (void)
{
	TMOD=0x20;    //USE timer 1 ,mode 2
	TH1=0xFA;   //4800 BARD RATE OR CAN USE -6 DECIMAL
	SCON =0x50;//
	TR1=1;
	while(1)
	{
		SBUF='A';
		while(TI==0);
		TI=0;
	}
}