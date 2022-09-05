//toggle p1 forever with some delay in between "on" and "off" wthin 250ms.
#include <reg51.h>
void MSdelay(unsigned int);
void main (void)
{
	while (1)
	{
		P1=0x55;
		MSdelay(250);
		P1=0xAA;
		MSdelay(250);
	}
}

void MSdelay(unsigned int itime)
{
	unsigned int i,j;
	for (i=0;i<itime;i++);
		for (j=0;j<1275;j++);
}
