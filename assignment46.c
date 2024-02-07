#include<stdio.h>
#include<stdlib.h>
float variance(int*, int);					//declaring a function
int main()
{
	int size;
	float ret;

	printf("Enter the no. of elements:");
	scanf("%d", &size);

	int * p = (int*)malloc(size*sizeof(int));		//allocating memory

	printf("Enter the %d elements:\n", size);
	for(int i = 0; i < size; i++)
	{
		printf("[%d]->",i);
		scanf("%d",p + i);
	}

	ret=variance(p, size);					//calling function
	printf("Variance is %f\n", ret);
}

float variance(int *p, int size)				//defining a function
{
	int sum = 0,diff = 0,diff1 = 0;
	float mean;

	for(int i = 0; i < size;  i++)				//loop to get sum of numbers
	{
		sum = sum + p[i];
	}
	mean = (float)sum / size;				//to get average of values

	for(int j = 0; j < size; j++)				//loop to get difference
	{
		diff = p[j] - mean;
		diff1 = diff1 + (diff * diff);
	}
	return (float)diff1 / size;
}

