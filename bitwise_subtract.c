#include<stdio.h>
int main()
{
	int num,num1,num2,num3;
	printf("enter two numbers num1 and num2\n");
	scanf("%d %d",&num1,&num2);
	num = num1 | num1;
	num3 = num > 1;
	printf("%d - %d = %d\n",num1,num2,num3);
	return 0;
	
	
}	

