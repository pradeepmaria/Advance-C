#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=4;j++)
		{
			if(j%2==i%2) 
				printf("$");
			else
				printf("*");
		}
		printf("\n");
	}
	return 0;
}


