 #include <reg51.h>
 void main(void)
 {
	 unsigned char mynum[]="012345ABCD";
		unsigned char z;
	 for (z=0;z<=10;z++)
		P2=mynum[z];
 }