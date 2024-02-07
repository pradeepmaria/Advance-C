#include<stdio.h>
int main()
{
	static int num,factorial=1,n=0;
	if(n == 0)
	{
	printf("enter the factorial number: ");
	scanf("%d",&num);
	}

	if(num>0)
	{
		factorial = factorial*num;
		num--;
		n=1;
		main();
	}
	else
	{
		printf("factorial is %d\n",factorial);
	}

	return 0;
}
