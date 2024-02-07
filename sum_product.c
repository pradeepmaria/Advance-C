#include<stdio.h>

int sum_prod(int a,int b,int *sum,int *prod)
{
	
	*sum = a+b;
	*prod = a*b;
	return 0;
}

int main()
{
	int sum,prod;
	sum_prod(10,20,&sum,&prod);

	printf("%d\n",sum);
	printf("%d\n",prod);

	return 0;
}
