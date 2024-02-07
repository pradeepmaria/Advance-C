#include<stdio.h>
 void fun(int *arr1,int size,int *arr2,int *new_size);

 int main()
{
	int i,size;
	printf("enter the array size:");
	scanf("%d",&size);
	int arr1[size];
	printf("enter the array elements:");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr1[i]);
	}
	int new_size;
	int arr2[new_size];

	fun(arr1,size,arr2,&new_size);

	printf("after removing duplicates:");
	for(i=0;i< new_size;i++)
	{
		printf("%d ",arr2[i]);
	}
	printf("\n");
	printf("new array size of arr2 is :%d\n",new_size);
	
	return 0;
}
void fun(int *arr1,int size,int *arr2,int *new_size)
{
	int i,j,count;
	*new_size = 0;

	for(i=0;i<size;i++)
	{
		count = 0;
		for(j=0;j<*new_size;j++)
		{
			if(arr2[j] == arr1[i])
			{
				count++;
				break;
			}
		}
		if(count == 0)
		{
			arr2[*new_size] = arr1[i];
			(*new_size)++;
			
		}
	}
}


