#include<stdio.h>
#include<string.h>
int main()
{
	char str[20] = "pradeep";
	char *str1;
	
	str1 = strdup(str);
	
	printf("original string is %s\n",str);
	printf("duplicate string is %s\n",str1);
}

