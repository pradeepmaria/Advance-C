#include<stdio.h>
int main()
{
	int i,num,n,c;

	printf("enter the number and bit position:");
	scanf("%d%d",&num,&n);
	c = (num &(~(1<<n)));
	
	for(i=31;i>=0;i--)
	{
		if((c & 1<<i) != 0)
		{
			printf("1");
		}
		else
		{
			printf("0");
	
		}
	}
	printf("\n");


}
