#include <reg51.h>
sbit inbit=P1^0;
sbit outbit=P2^7;
bit membit;

void main (void)
{
	while(1)
	{
		membit=inbit;
		outbit=membit;
	}
}