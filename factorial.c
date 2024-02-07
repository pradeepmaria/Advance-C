#include<stdio.h>
int factorial(int x);

int main()
{
	int num,ret;
	scanf("%d",&num);

	ret = factorial(num);
	printf("factorial of %d is %d\n",num,ret);
	return 0;
}

int factorial(int x)
{
	int m=1,i;
	for(i=x;i>0;i--)
	{
		m = m * i;
	}
	return m;
}

