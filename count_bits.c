#include<stdio.h>
int main()
{
	int i,num;
	printf("enter the number\n");
	scanf("%d",&num);

	for(i=31;i>=0;i--)
	{
		if(i==8 || i==16||i==24)
                   printf(" ");
		 if( num >> i & 1 != 0)
		{
			printf("1");
		}
		else
			printf("0");
	}
	printf("\n");
}

