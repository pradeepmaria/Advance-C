#include<stdio.h>
int average_array(int array[],int size);
int print_array(int new_val);

int main()
{
	int array[5] = {10,20,30,40,50};
	int new_array_val;	
	new_array_val = average_array(array,5);
	print_array(new_array_val);
	return 0;
}
int print_array(int new_val)
{
	printf("Average of 5 array element is %d\n",new_val);
}
int average_array(int array[],int size)
{
	int sum,average;
	sum = array[0] + array[1] + array[2] + array[3] + array[4];
	average = sum/size;
	return average;
}
	
