#include<stdio.h>
int main()
{
	int num,num1,num2;
	printf("enter the numbers num1 << num2\n");
	scanf("%d %d",&num1,&num2);

	num = num1 << num2;

	printf("%d << %d = %d\n",num1,num2,num);

	return 0;
}

