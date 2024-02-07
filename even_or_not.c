#include<stdio.h>
int even_not(int a);

int main()
{
	int x ,ret;
	scanf("%d",&x);
	
	ret = even_not(x);

	if(ret == 1)
	{
		printf("%d is true\n",x);
	}
	else
	{
		printf("%d is false\n",x);
	}
	return 0;
}

int even_not(int a)
{

	 if(a % 2 == 0)
	 {
		 return 1;
	 }
	 else
	 {
		 return 0;
	 }
}

