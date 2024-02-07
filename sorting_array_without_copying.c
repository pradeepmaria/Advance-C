#include <stdio.h>
int array_smallest(int arr[],int size);
int array_largest(int arr[],int size);

int print_sort(int arr[], int n, int small, int large);

int main()
{
    int size,small,large,i;
    
    printf("Enter the size of the array : ");
    scanf("%d", &size);
    
    int arr[size];
    
    printf("Enter the %d elements\n",size);
    for (i=0;i<size;i++)
    {
        scanf("%d", &arr[i]);
    }
 	small = array_smallest(arr,size);
	printf("smallest is = %d\n",small);

	large = array_largest(arr,size);
        printf("largest is = %d\n",large);

	
     printf("After Sorted : ");

    print_sort(arr, size,small,large);
   
	printf("\n");

	printf("Original array values :");
	for (i=0;i<size;i++)
    	{
        	printf("%d ",arr[i]);
    	}
	printf("\n");

    return 0;
}
int print_sort(int arr[], int n,int small, int large)
{
	int sec_small,i,j;
	printf("%d ",small);
	 for(i=1;i<n;i++)
	 {
		 sec_small = large;
		 for(j=0;j<n;j++)
		 {
			 if(arr[j] > small && arr[j] < sec_small)
			 {
				 sec_small = arr[j];
                      }
                }
		 small = sec_small;
		printf("%d ",small);
		
	}
}

int array_smallest(int arr[],int size)
{
        int smallest,i;
        smallest = 0;
        for(i=0;i<size;i++)
        {

                if(arr[i] < smallest)
                {
                        smallest = arr[i];
                }

        }
        return smallest;
}
int array_largest(int arr[],int size)
{
        int largest,i;
        largest = arr[0];
        for(i=0;i<size;i++)
        {

                if(arr[i] > largest )
                {
                        largest = arr[i];
                }


        }
        return largest;
}
