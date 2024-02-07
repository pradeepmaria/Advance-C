#include<stdio.h>
#include<string.h>
int main()
{
	char str[] = "www.emertxe.com/bangalore";
	char *del = "." "/";

	char *ret = strtok(str,del);
	if(ret != NULL)
	{
		printf("ret = %s\n",ret);
	}
	else
	{
		printf("No match found\n");
	}
	while((ret = strtok(NULL,del)) != NULL)
	{
		printf("ret = %s\n",ret);
	}
}
