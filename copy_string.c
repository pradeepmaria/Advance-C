#include<stdio.h>

int my_strcopy(char *copy,const char *arr)
{
	int i=0;
	for(i=0; arr[i] != '\0';i++) 
	{
		copy[i] = arr[i];
	}
	copy[i] = '\0';

}
int main()
{
	char arr[] = "hello world";
	char copy[20];
		 
	 my_strcopy(copy,arr);

		 
	printf("%s\n",copy);
	return 0;
	
}

