#include<stdio.h>
int main()
{
	int i,num;
	printf("enter the number\n");
	scanf("%d",&num);
	for(i=32;i>=0;i--)
	{
		
		if((num & 1 << i) != 0)
		{
		
			printf("1");
		}
		else 
			printf("0");
	}
	printf("\n");
	return 0;

}
