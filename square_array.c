#include<stdio.h>
int *square_array(int *array,int size);
int main()
{
	int array[5] = {1,2,3,4,5};
	int *new_array_val;
	 square_array(array,5);

	return 0;
}
int *square_array(int *array,int size)
{
	int iter,square;
	for(iter=0;iter<size;iter++)
	{

	square = array[iter] * array[iter];
	printf("square of index %d has element %d\n",iter,square);
	}

	return 0;
}


