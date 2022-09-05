#include <reg51.h>
void main (void)
{
	unsigned char x,y,z;
	unsigned char mybyte=0x29;
	x=mybyte&0x0F;
	P0=x| 0x30;
	y=mybyte & 0xF0;
	y=y >>4;
	P1=y;
	P2=y|0x30;
}