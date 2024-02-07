#include<stdio.h>
void printsort(int *, int);			//declaring the function

int main()
{
    int size, iter;

    printf("Enter the size : ");
    scanf("%d", &size);					//reading the size of an array from user

    int arr[size];

    printf("Enter %d elements\n",size);
    for (iter = 0; iter < size; iter++)
    {
	scanf("%d", &arr[iter]);			//reading array elements
    }

    printsort(arr, size);				//calling the function
    printf("\nOriginal array values ");
    for(int i=0;i<size;i++)
    {
	printf("%d ",arr[i]);
    }
    printf("\n");
}
void printsort(int *arr,int size)			//defiining the function
{
    int largest=arr[0],smallest=arr[0],temp;
    for(int i=0;i<size;i++)				//loop to get largest element from an array
    {
	if(largest<arr[i])
	{
	    largest=arr[i];
	}
    }
    for(int i=0;i<size;i++)				//loop to get smallest element from an array
    {
	if(smallest > arr[i])
	{
	    smallest=arr[i];
	}
    }
    printf("After sorting:");
    printf("%d ",smallest);				//printing the first smallest element

    int second;
    for(int j=1;j<size;j++)
      {
	  second=largest;

	  for(int i=0;i<size;i++)			//loop to get smallest elemets from an array and to print the output
	  {
	      if((arr[i] < second) && (arr[i] > smallest))
	      {
		  second=arr[i];
	      }
	  }
	  printf("%d ",second);
	  smallest=second;
      }
}

