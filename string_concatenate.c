#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20] = "hello";
	char str2[6] = "world";

	strcat(str1,str2);

	printf("%s\n",str1);
}
