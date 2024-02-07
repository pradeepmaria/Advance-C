#include<stdio.h>
int array_smallest(int arr[],int size);
int main()
{
	int size,ret;
	printf("enter array size:");
	scanf("%d",&size);
	int arr[size],i;
	printf("enter array elements:");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	ret = array_smallest(arr,size);
	printf("smallest is = %d\n",ret);
	return 0;

}
int array_smallest(int arr[],int size)
{
	int smallest,i;
	smallest = arr[0];
	for(i=0;i<size;i++)
	{
	
		if(arr[i] < smallest )
		{
			smallest = arr[i];
		}
			
		
	}
	return smallest;
}
