#include<stdio.h>
int main()
{
	int i,j,num;
	printf("enter the number of rows num:\n");
	scanf("%d",&num);

	for(i=1;i<=num;i++)
	{
		for(j=1;j<=num;j++)
		{
			if( j == i || j == num+1 - i )
			{
				printf("%d",j);
			}
			else
			{
				printf(" ");
			}

		}
		printf("\n");
	}

	return 0;
}

