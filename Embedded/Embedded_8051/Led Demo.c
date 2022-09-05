#include <reg51.h>
#define LCDData P1
sbit en=P1^0;

void main(void)
{
	unsigned char message[]="The Earth is but One Country";
	unsigned char z;
	for (z=0;z<28;z++)
		{
			LCDData =message[z];
			en=1;
			en=0;
		}
	
}