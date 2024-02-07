#include<stdio.h>
int main()
{
	int i,power,num=1;
	printf("enter the no: of power\n");
	scanf("%d",&power);

	for(i=1;i<=power;i++)
	{
		num = 2*num;
		printf("%d ",num);
	}
	printf("\n");

	return 0;
}

