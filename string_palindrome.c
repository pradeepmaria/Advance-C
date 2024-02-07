#include<stdio.h>

int string_palindrome(char *arr)
{
	int i=0,my_strlen=0,len=0,count=0;
	
	while(arr[i] != '\0' && arr[i] != '\n')
	{
		i++;
	}
	my_strlen = i;
	printf("string length is %d\n",i);
	len = my_strlen;

        for(i=0;i<len;i++)
        {
         	if(arr[i] != arr[len-i-1])
                {
                        return 1;
                }
        }
	return 0;
}
int main()
{
        int ret;
        char arr[20];
	fgets(arr,20,stdin);
        ret= string_palindrome(arr);
         if(ret == 0)
         {
                 printf("Palindrome");
         }
         else
         {
                 printf("Not Palindrome");
         }
         printf("\n");


        return 0;

}

