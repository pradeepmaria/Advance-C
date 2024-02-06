#include<stdio.h>
int main()
{
	int num,i;
	printf("enter the number\n");
	scanf("%d",&num);
	for(i=0;i<=31;i++)
	{

	printf("%d",num & i);
	}
	printf("\n");
}
