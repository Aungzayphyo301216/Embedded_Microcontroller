#include <reg51.h>
void main (void)
{
	unsigned char bcd;
	unsigned char w='4';
	unsigned char y='7';
	w=w&0x0F;
	w=w<<4;
	y=y&0x0F;
	bcd=w|y;
	P1=bcd;
	
}