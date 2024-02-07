#include<stdio.h>
int main()
{
	 int num = 0x12345678;
	int a;
	a = (num & 0x000000FF)<< 24 | (num & 0x0000FF00)<<8 | (num & 0xFF000000)>>24 | (num & 0x00FF0000)>>8;
			
	printf("0x%X\n",a);
}


