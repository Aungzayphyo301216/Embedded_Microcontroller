#include <reg51.h>

void main (void)
{
	unsigned char mynum[]="ABCDEF";
	unsigned char x;
	for (x=0;x<=6;x++)
	  P2=mynum[x];
}