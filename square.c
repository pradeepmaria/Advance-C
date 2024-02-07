#include<stdio.h>
int square(int a);

int main()
{
	int x,result;
	scanf("%d",&x);
	result = square(x);
	printf("square of %d is %d\n",x,result);
	return 0;
}
int square(int a)
{
	int y;
	y = a * a;
	return y;
}

			
