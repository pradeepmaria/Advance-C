#include<stdio.h>

int main()
{
    int i,j,M,N,temp;

    printf("Enter the size of the array1: ");
    scanf("%d", &M);

    printf("Enter the size of the array2: ");
    scanf("%d", &N);

    int array1[M],array2[N];

    printf("Enter unsorted array1 elements: ");
    for(i = 0; i < M; i++)
    {
        scanf("%d", &array1[i]);
    }
	
    printf("Enter unsorted array2 elements: ");
    for(i = 0; i < N; i++)
    {
        scanf("%d", &array2[i]);
    }

    printf("Sorted array1: ");
    for(i = 0; i < M; i++)
    {
        for(j = i + 1; j < M; j++)
        {
            if(array1[i] > array1[j])
            {
                temp = array1[i];
                array1[i] = array1[j];
                array1[j] = temp;
            }
        }

        printf("%d ", array1[i]);
    }

    printf("\n");

    printf("Sorted array2: ");
    for(i = 0; i < N; i++)
    {
        for(j = i + 1; j < N; j++)
        {
            if(array2[i] > array2[j])
            {
                temp = array2[i];
                array2[i] = array2[j];
                array2[j] = temp;
            }
        }

        printf("%d ", array2[i]);
    }

    printf("\n");
	
     float average1,average2,final;
     int sum,d;

        if(M % 2 == 0)
        {
                d = ( M / 2 );
                sum = array1[d-1] + array1[d];
                average1 = (float)sum/2;
                printf("Median of array1 : %g ",average1);

        }
        else if(M %2 !=0)
        {
                d = (M / 2);
                printf("Median of array1 : %d ",array1[d]);
        }
        printf("\n");


        if(N % 2 == 0)
        {
                d = ( N / 2 );
                sum = array2[d-1] + array2[d];
                average2 = (float)sum/2;
                printf("Median of array2 : %g ",average2);

        }
        else if(N % 2 !=0)
        {
                d = (N / 2);
                printf("Median of array2 : %d ",array2[d]);
        }
        printf("\n");

	

	if(average1 && average2)
	{
		sum = average1 + average2;
		final = (float) sum/2;
		printf("Median of both arrays : %g",final);
	}
	else if(array1[d] && array2[d])
	{
		sum = array1[d] + array2[d];
		final = (float)sum/2;
		printf("Median of both arrays : %g",final);
	}
	else if(average1 && array2[d])
	{
		sum = (float) average1 + array2[d];
		final = (float)sum/2;
		printf("Median of both arrays : %g",final);
	}
	else if(array1[d] && average2)
	{
		 sum = array1[d] + average2;
		final = (float) sum/2;
		printf("Median of both arrays : %g",final);
	}
    printf("\n");

    return 0;
}
    

