#include<stdio.h>
int main()
{
	int sum1,sum2,arr1[5],arr2[5];
	printf("enter first array elements\n");
	scanf("%d %d %d %d %d\n",&arr1[0],&arr1[1],&arr1[2],&arr1[3],&arr1[4]);		
	printf("enter second array elements\n");
	scanf("%d %d %d %d %d\n",&arr2[0],&arr2[1],&arr2[2],&arr2[3],&arr2[4]);
	
	
	sum1 = arr1[0]+arr1[1]+arr1[2]+arr1[3]+arr1[4];
	sum2 = arr2[0]+arr2[1]+arr2[2]+arr2[3]+arr2[4];

	if ( sum1 == sum2 )
		printf("array1 and array2 are equal\n");
	else
		printf("array1 and array2 are not equal\n");
}





