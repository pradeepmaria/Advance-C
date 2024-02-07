#include <stdio.h>
void fun(int *arr1, int size, int *arr2, int *new_size);

int main()
{
	int size;
        printf("Enter the size :");
        scanf("%d",&size);
        int arr1[size],i;
        printf("Enter the elements into the array:");
        for(i=0;i<size;i++)
        {
                scanf("%d",&arr1[i]);
        }
	    int arr2[size]; // Assuming the new array size won't exceed the original array size
    	    int new_size;
        fun(arr1,size,arr2,&new_size);
       
	 printf("Array with duplicates removed: ");
    	for (int i = 0; i < new_size; i++) 
    	{
        	printf("%d ", arr2[i]);
    	}

    	printf("\nNew array size after removing duplicates: %d\n", new_size);


        return 0;

}
void fun(int *arr1, int size, int *arr2, int *new_size) 
{
	int i,j;
    // Initialize the new_size to 0
    *new_size = 0;

    for (i = 0; i < size; i++) 
    {
        int isDuplicate = 0;

        // Check if the element is a duplicate
        for (j = 0; j < *new_size; j++) 
	{
            if (arr1[i] == arr2[j]) 
	    {
                isDuplicate++;
                break;
            }
        }

        // If it's not a duplicate, copy it to the new array
        if (isDuplicate == 0) 
	{
            arr2[*new_size] = arr1[i];
            (*new_size)++;
        }
    }
}





