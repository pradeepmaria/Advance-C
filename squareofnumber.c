#include<stdio.h>

int squareofnumber(int x,int *square)
{
	*square = x * x;
	return 0;
}

int main()
{
	int a,square;
	printf("enter a number\n");
	scanf("%d",&a);
	squareofnumber(a,&square);
	printf("%d\n",square);
	return 0;
}
