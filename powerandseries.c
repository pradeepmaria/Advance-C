#include<stdio.h>
int main()
{
	int power,series,i,num=1;
	printf("enter series and power no:\n");
	scanf("%d %d",&series,&power);

	for(i=1;i<=power;i++)
	{
		num = series*num;
		printf("%d ",num);
	}
	printf("\n");
	return 0;
}

