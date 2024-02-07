#include<stdio.h>
int main()
{
	int i,j,temp,size;
	printf("enter the size of the array :");
	scanf("%d",&size);
	int arr[size];
	printf("enter the array elements : ");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}

	printf("Ascending order is : ");
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
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
