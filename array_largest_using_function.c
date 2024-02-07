#include<stdio.h>
int array_largest(int arr[],int size);
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
	ret = array_largest(arr,size);
	printf("largest is = %d\n",ret);
	return 0;

}
int array_largest(int arr[],int size)
{
	int largest,i;
	largest = 0;
	for(i=0;i<size;i++)
	{
	
		if(arr[i] > largest )
		{
			largest = arr[i];
		}
			
		
	}
	return largest;
}
