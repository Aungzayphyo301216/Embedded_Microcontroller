#include <reg51.h>
void MSdelay(unsigned int);
	sbit dsensor=P1^2;
  sbit buzzer=P1^7;

void main (void)
{
	dsensor =1;
	while (1)
	{
		while (dsensor==1);
		{
			buzzer=0;
			MSdelay(200);
			buzzer=1;
			MSdelay(200);
			}
	}
	
	
}