#include<stdio.h>
int main()
{
	int size,n;

	printf("Enter the size:");
	scanf("%d", &size);
	printf("Enter any number in Hexadecimal:");
	scanf("%X", &n);					//reading values

	char *ptr=(char *)&n;					//storing the address of a value in a character pointer 

	for(int i = 0; i < size / 2; i++)			//loop to swap 
	{

		unsigned char temp = *(ptr + i);
		*(ptr + i)= *(ptr + (size - 1) - i);
		*(ptr + (size - 1)- i) = temp;

	}
	printf("After conversion %X\n", n);			//printing the output
	return 0;
}
