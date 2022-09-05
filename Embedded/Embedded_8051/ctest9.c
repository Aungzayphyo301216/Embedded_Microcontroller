#include <reg51.h>
void Msdelay (unsigned int);
void main (void)
{
	P0=0x55;
	P1=0x55;
	for (;;)
	{
	
		P0=~P0;
		P1=P1^0xFF;
		Msdelay(250);
	}
}