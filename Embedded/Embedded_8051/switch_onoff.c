#include <reg51.h>

void wait_a_second()
{
	unsigned int x;
	for (x=0;x<25000;x++);
}

void main ()
{
	int led;
	for(;;)
	{	
		led=rand();
		P1=~led;
	
		wait_a_second();
	}
}