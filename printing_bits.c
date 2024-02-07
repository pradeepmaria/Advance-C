#include<stdio.h>
int main()
{
	int i,num;
	printf("enter the number:");
	scanf("%d",&num);
	
	for(i=32;i>0;i--)
	{
		//if(i==8 || i==16||i==24)
		//printf(" ");
	
		if((num & 1 << i) == 0)
		{
			printf("0");
		}
		else 
			printf("1");

	}
	printf("\n");
	return 0;
}

