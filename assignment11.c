#include<stdio.h>
int main()
{
	int num,N,M;

	printf("enter the number num = ");
	scanf("%d",&num);
	printf("enter 'N': ");
	scanf("%d",&N);
	printf("enter 'M': ");
	scanf("%d",&M);

	num = num | (1<<N);   //set the bit .
	num = num & (~(1<<M)); //clear the bit .
	
	printf("updated value of num is %d \n",num); 

	return 0;
}

