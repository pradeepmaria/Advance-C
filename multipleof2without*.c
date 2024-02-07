#include<stdio.h>
int main()
{
	int i,a,b,num=0;
	printf("enter two nos:");
	scanf("%d %d",&a,&b);

	for(i=1;i<=b;i++)
	{
		num = num + a;
	}
		printf("%d \n",num);
	
	return 0;
}
