#include <reg51.h>

void delay(unsigned int x)
{

	for (x=0;x<33000;x++)
	{
	};
}

void main ()
{
	unsigned char nums[10]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F};
	unsigned char z;
	for (z=0;z<10;z++)
		{
			P2 =nums[z];
			delay();
		};
	
}