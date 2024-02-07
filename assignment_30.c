#include<stdio.h>
int positive_fibbonacci(int n);
int main()
{
	int i,limit,ret;
	printf("Enter a number:");
	scanf("%d",&limit);

	if(limit > 0)
	{
		 
		for(i=0;i<=limit+1;i++)
		{
		ret = positive_fibbonacci(i);
			if(ret <= limit)
			{
			printf("%d ",ret);
			}

		}
		printf("\n");
	}
	else
	{
		printf("Invalid input\n");
	}
	
	return 0;
}
int positive_fibbonacci(int n)
{
	if(n == 0)
	{
		return 0;
	}
	else if(n == 1)
	{
		return 1;
	}
	else
	{
		
		return (positive_fibbonacci(n -1) + positive_fibbonacci(n -2));
	}
}

