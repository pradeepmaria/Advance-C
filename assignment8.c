#include<stdio.h>
int main()
{
	int i,j,num;
	printf("enter the number of rows num:\n");
	scanf("%d",&num);

	for(i=num;i>=1;i--)
	{
		for(j=i;j<=num;j++)
		{
			printf("%d",j);
			
		}
		printf("\n");
	}
	for(i=2;i<=num;i++)
	{
	
		for(j=i;j<=num;j++)
		{

			printf("%d",j);
		}
		printf("\n");
	}
}
