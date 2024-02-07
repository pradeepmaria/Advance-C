#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			if(i==2)
				printf("@");
			else if(i==3)
				printf("*");
			else
				printf("$");
		}
		printf("\n");
	}
	return 0;
}



