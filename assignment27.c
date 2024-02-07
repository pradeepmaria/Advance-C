#include<stdio.h>
int Third_largest(int arr[],int size);
int main()
{
        int size,ret;
        printf("Enter the size of the array:");
        scanf("%d",&size);
        int arr[size],i;
        printf("Enter the elements into the array:");
        for(i=0;i<size;i++)
        {
                scanf("%d",&arr[i]);
        }
        ret = Third_largest(arr,size);
        printf("Third largest element of the array is = %d\n",ret);
        return 0;

}
int Third_largest(int arr[],int size)
{
        int max1,max2,max3,i;
        max1 = 0;
        max2 = 0;
	max3 = 0;
        for(i=0;i<size;i++)
        {

                      /*  if(arr[i] > largest )
                        {
				third = second;
                                second = largest;
                                largest = arr[i];
                        }
                        else if(arr[i] > second)
                        {
                                second = arr[i];
                        }
			else if(arr[i] > third)
			{
				third = arr[i];
			}*/
			
		if(max1 < arr[i])
		{
			max3 = max2;
			max2 = max1;
			max1 = arr[i];
		}
		else if(max2 <= arr[i] && max1 > arr[i])
		{
			max3 = max2;
			max2 = arr[i];
		}
		else if(max3 <= arr[i] && max1 > arr[i] && max2 > arr[i])
		{
			max3 = arr[i];
		}

        }
        return max3;
}


