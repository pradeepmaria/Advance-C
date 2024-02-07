#include<stdio.h>
int main()
{
	int arr[5],i;
	printf("enter the 5 array elements:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");

	if(arr[0]>arr[1] && arr[0]>arr[2] && arr[0]>arr[3] && arr[0]>arr[4])
	       printf("%d is largest \n",arr[0]);
	else if(arr[1]>arr[0] && arr[1]>arr[2] && arr[1]>arr[3] && arr[1]>arr[4])
		printf("%d is largest \n",arr[1]);
	else if(arr[2]>arr[0] && arr[2]>arr[1] && arr[2]>arr[3] && arr[2]>arr[4])
		printf("%d is largest \n",arr[2]);
	else if(arr[3]>arr[0] && arr[3]>arr[1] && arr[3]>arr[2] && arr[3]>arr[4])
		printf("%d is largest \n",arr[3]);
	else if(arr[4]>arr[0] && arr[4]>arr[1] && arr[4]>arr[2] && arr[4]>arr[3])
		printf("%d is largest \n",arr[4]);
	else 
		printf("enter proper number\n");
return 0;
}	
	


