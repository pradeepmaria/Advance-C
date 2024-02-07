#include<stdio.h>

int my_strcmp(const char *copy,const char *arr)
{
	int i;
   	for(i=0;arr[i] != '\0' || copy[i] != '\0' ;i++)
	{
		if(arr[i] != copy[i])
		{
			return 1;
		}
	}
	return 0;
}
int main()
{
	int ret;
        char arr[] = "Hello";
        char copy[] = "Hello";

        ret= my_strcmp(copy,arr);
	 if(ret == 0)
	 {
		 printf("Equal");
	 }
	 else
	 {
		 printf("Not equal");
	 }
	 printf("\n");

        
        return 0;

}

