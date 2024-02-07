#include<stdio.h>	
int main()
{
	int num;
	printf("enter the numbers\n");
	scanf("%d",&num);

	num = ~ num;

	printf("%d\n",num);
	 return 0;
}

