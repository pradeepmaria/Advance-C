#include<stdio.h>
int second_largest(int arr[],int size);
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
        ret = second_largest(arr,size);
        printf("second largest is = %d\n",ret);
        return 0;

}
int second_largest(int arr[],int size)
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

