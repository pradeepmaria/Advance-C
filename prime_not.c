#include<stdio.h>
int prime_not(int a);


int main()
{
	int x,ret;
	scanf("%d",&x);
	ret = prime_not(x);
	if(ret == 1)
	{
		printf("true the number is prime\n");
	}
	else
	{
		printf("false the number is not prime\n");
	}
	return 0;
}
int prime_not(int a)
{
	int count=0,i;
	for(i=1;i<=a;i++)
	{
		if(a % i == 0)
		{
			count++;
		}
	}
	if(count == 2)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
