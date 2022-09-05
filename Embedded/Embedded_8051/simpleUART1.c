#include <reg51.h>
#define led P1^1

const char c[]="enter 1 for ON ,n For OFF";

void uart_send()
{	
	int j=0;
	while (c[j] !='\0') 
	{
		SBUF=c[j];
		while(TI==0);
		TI=0;
		j++;  //j increase for TI reset
	}
}

unsigned char uart_receive()
{
	while (RI==0);
	RI=0;
	return SBUF;
}
void uart_init()
{																			// 0	1		0		1		0		0		0		0
	SCON=0x50;	//serial mode 2 and 8 BIT SM0 SM1 SM2 REN TB8 RB8 TI RI
	TMOD=0x20;	//timer 1 ,mode 2
	TH1=0xFD;	// bard rate 9600  ,255-Fosc/12/32*bard rate
	TR1=1;
}
void main()
{
	unsigned char v;
	led=0  ;
	uart_init();
	uart_send();
	while(1)
	{
		v=uart_receive();
		if (v =='1')
			led=1;
		else if(v=='n')
			led=0;
	}
	
}