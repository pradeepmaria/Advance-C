#include<stdio.h>
int main()
{
	int i,num,count=0;
	printf("enter the number\n");
	scanf("%d",&num);

	for(i=1;i <= num;i++)
	{
		if(num % i == 0)
		{
			count++;
		}
	}
	if (count == 2)
	
		printf("it is prime number\n");
		else 
			printf("it is not prime number\n");
	
	return 0;
}


				
