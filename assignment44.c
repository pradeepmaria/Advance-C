#include<stdio.h>

int pangram(char *);
int main()
{
							    //declare int type variables
    int ret;
    char str[100];
    								//reading inputs from the user
    printf("Enter the string:");
    scanf("%[^\n]", str);
   								 //function call
    ret = pangram(str);
    if(ret == 1)
	    printf("The entered string is a pangram string\n");
    else
	    printf("The entered string is not a pangram string\n");
}
int pangram(char *str)				//defining a functon
{
    int count = 0;
    int i = 0, j = 0;
    char arr[27]={0};						//initializing array
    for(int i = 0; str[i] != '\0'; i++)				//loop for checking alphabets
    {
	    if(str[i] >= 97 && str[i] <= 122)			//condition to check small letters
	    {
	        arr[str[i]-97] += 1;
	    }
	    if(str[i] >= 65 && str[i] <= 90)			//condition to check big letters
	    {
	        arr[str[i]-65] += 1;
	    }
    }
    for(int i = 0; i < 26; i++)
    {
	    if(arr[i] == 0)
	        return 0;
    }
    return 1;
}
