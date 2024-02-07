#include<stdio.h>
int main()
{
	int num,i,sum=0;
	printf("enter a number num \n");
	scanf("%d",&num);
	if(num > 0)
	{

		for(i=1;i<=num;i++)
		{
			if(num % i == 0)
			{	
			  sum = sum + i;
			}
		}
			sum = sum/2;
		if( sum == num )
		{
			printf("yes,entered number is perfect number\n");
		}
		else
		{
			printf("no ,entered number is not perfect number\n");
		}
	}
	else
	{
		printf("error:invalid input enter only positive number\n");
	}
}
