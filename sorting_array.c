#include<stdio.h>
int main()
{
	int i,j,num,temp;
	

	printf("enter the size of array num:\n");
	scanf("%d",&num);

	 int arr[num];
	printf("enter unsorted array elements:");
	for(i=0;i<=num-1;i++)
	{
		scanf("%d",&arr[i]);
	}
	  printf("sorted arrays are : ");

	for(i=0;i<=num-1;i++)
	{
		for(j=i+1;j<=num-1;j++)
		{
	
			if(arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
			
		}
		
		printf("%d ",arr[i]);
	}
	
	printf("\n");

}

