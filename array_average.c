#include<stdio.h>
int main()
{
	int i, arr[5] ,sum,num = 5;
	printf("enter the 5 array no:\n");

	for(i=0;i<5; i++)
	{
	 scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++)
	{
	 printf("%d ",arr[i]);
	}
	printf("\n");
	sum = arr[0] + arr[1] + arr[2] + arr[3] + arr[4];
	
	float average;
	 average = (float) sum / num ;
	printf("sum = %d\n",sum);

	printf("average = %.2f\n",average);

}
	

