#include<stdio.h>
int main()
{
	int x = 1234;
	char str[5];
	//printf("%s",str);
	sprintf(str,"%d",x);
	printf("%s",str);
	printf("\n");
}

