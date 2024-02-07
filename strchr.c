#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	char delim[50];
	
	printf("enter the string:");
	scanf(" %[^\n]",str);
	
	printf("enter delimeter:");
	scanf(" %[^\n]",delim);

	 char *ret = strchr(str,*delim);
	 if(ret != NULL)

	printf("%s\n",ret);
}
