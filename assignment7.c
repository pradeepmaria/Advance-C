#include<stdio.h>
int main()
{
	int i,j,num,n=1;
	printf("enter the number of rows num:\n");
	scanf("%d",&num);

	for(i=1;i<=num;i++)
	{
		for(j=num;j>=i;j--)
	        {
			if(i == 1 || j == i || j == num )
			{

			  printf("%d",n);
			  n= n+1;
			}
			else
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}
		

