//Accessing Ports as sfr using sfr data type 
sfr P0=0x80;
sfr P1=0x90;
sfr P2=0xA0;

void Msdelay (unsigned int);

void main (void)
{
	while (1)
	{	
		P0=0x55;
		P1=0x55;
		P2=0x55;
		Msdelay(250);
		P0=0xAA;
		P1=0xAA;
		P2=0xAA;
		Msdelay(250);
	}
}
	