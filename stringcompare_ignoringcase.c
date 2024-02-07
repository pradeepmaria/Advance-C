#include<stdio.h>
#include<ctype.h>

int my_strcmp(const char *copy,const char *arr)
{
        int i;
	char ch1,ch2;
        for(i=0;arr[i] != '\0' || copy[i] != '\0' ;i++)
        { 
		ch1 = toupper(arr[i]);
		ch2 = toupper(copy[i]);
                if(ch1 != ch2)
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
        char copy[] = "he";

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

