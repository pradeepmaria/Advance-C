#include<stdio.h>
int main()
{
	int num,i,count=0;
	printf("enter the number:");
	scanf("%d",&num);
	printf("number in bits ="); 
	for(i=31;i>=0;i--)
	{
	  if( (num & 1<< i) != 0 )
		{

			printf("1");
			count++;
		}
		else
		{
			printf("0");
		}

	}
	
	printf("\n");
	printf("number of set bits = %d \n",count);
	
	if(count % 2 == 0)
	{
		printf("bit parity is even");
	}
	else
	{
		printf("bit parity is odd");
	}

			
	printf("\n");
	return 0;
}
