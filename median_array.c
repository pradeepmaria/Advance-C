#include<stdio.h>
int main()
{
        int i,j,num,arr[num];

        printf("enter the size of array num:\n");
        scanf("%d",&num);
        printf("enter unsorted array elements:");
        for(i=0;i<=num-1;i++)
        {
                scanf("%d",&arr[i]);
        }
	
	float average;
	int sum,d;
	
	if(num % 2 == 0)
	{
		d =( num / 2 );
		sum = arr[d-1] + arr[d];
		average = (float)sum/2;
		printf("%f ",average);
	
	}
	else if(num %2 !=0)
	{
		d = (num / 2);
		printf("%d ",arr[d]);
	}
	printf("\n");

}
