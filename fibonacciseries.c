#include<stdio.h>
int main()
{
	int num,num1=1,num2=0;
	printf("enter the num\n");
	scanf("%d",&num);
	if(num > 0)	
	
	while(num1 <= num && num2 <= num)
	{
		if(num2 <= num)
		printf("%d ",num2);
		num1 = num1 + num2;
		if(num1 <= num)
 		printf("%d ",num1);
		num2 = num1 + num2;
	}
	else
		printf("invalid input");

	printf("\n");

	return 0;
}
