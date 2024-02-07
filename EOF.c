#include<stdio.h>
#include<ctype.h>
int main()
{
	int ch;
	for(;(ch=getchar()) != EOF;)
	{
		putchar(tolower(ch));
	}
	puts("EOF Received");
	return 0;
}
