#include<stdio.h>
int main()
{
	unsigned char ch = 0xAB,a;

// 	A = ch << 4;
//	B = ch >> 4;
	 
	a = (ch << 4) | (ch >> 4) ;
	

	printf("0x%X\n",a);
}

