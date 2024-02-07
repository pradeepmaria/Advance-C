#include<stdio.h>

int main()
{
	int j;	

	for(j=1;j<=100;j++)
	{
		
		printf("Loading [");
		for(int i=1;i<=j;i++)
		{
			printf("-");
		}
		for(int i=j+1;i<=100;i++)
		{
			printf(" ");
		}	
			
		printf("]%d%%\r",j);
		fflush(stdout);
		sleep(1);
	}
	printf("\n");
	return 0;
}
