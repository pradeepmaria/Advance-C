#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20] = "hello";
	char str2[6] = "world";
	int i,len1,len2;
	len1 = strlen(str1);
	len2 = strlen(str2);
	
	for(i=0;i<=len2;i++)
	{
		str1[len1+i] = str2[i];
	}
	printf("%s\n",str1);
}
