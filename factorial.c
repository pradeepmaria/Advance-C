#include<stdio.h>
int main()
{
	int i,m=1,num;
	printf("enter the number num:");
	scanf("%d",&num);
	
	for(i=num;i>0;i--)
	{
		m = m * i;
	}
	printf("factorial of %d is %d\n",num,m);
	 return 0;
}


