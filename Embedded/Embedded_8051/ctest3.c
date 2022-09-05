 //toggle p1 forever
 #include <reg51.h>
 void main (main)
 {
	 for (;;)
	 {
		 P1=0x55;
		 P1=0xAA;
	 }
 }