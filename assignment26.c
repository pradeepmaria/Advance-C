#include <stdio.h>

int second_largest(int arr[], int size);

int main()
{
    int size, ret,i;
    
    //Read size from the user
    printf("Enter the size of the array :");
    scanf("%d", &size);
    
    //Read elements into the array
    int arr[size];
        printf("enter array elements:");
        for(i=0;i<=size-1;i++)
        {
                scanf("%d",&arr[i]);
        }
       
    //funtion call
    ret = second_largest(arr, size);
    
    printf("Second largest element of the array is %d\n", ret);
}
int second_largest(int arr[], int size)
{
	int largest,second,i;
        largest = 0;
        second = 0;
        for(i=0;i<size;i++)
        {

                        if(arr[i] > largest )
                        {
                                second = largest;
                                largest = arr[i];
                        }
                        else if(arr[i] > second)
                        {
                                second = arr[i];
                        }
        }
        return second ;

}

	
