#include<stdio.h>
#include<string.h>
int main()
{
	char str1[] = "pradeep";
	char str2[] = "pradeep";
	int ret;
	ret =  strcmp (str1, str2);
	if(ret == 0)
	{
		printf("strings are equal\n");
	}
	else
	{
		printf("strings are not equal\n");
	}
}
