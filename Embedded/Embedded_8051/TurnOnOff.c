
sbit mybit=0x95;
void main (void)
{	
	unsigned int z;
	for (z=0;z<50000;z++)
			{
					mybit=1;
					mybit=0;
			}
}