	#include <reg51.h>
	sbit MYBIT=P1^0;
	void main (void)
	{
		unsigned int z;
		for (z=0;z<5000;z++)
		{
			MYBIT=0;
			MYBIT=1;
		}
			
		
	}
	