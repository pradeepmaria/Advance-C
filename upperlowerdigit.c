#include<stdio.h>
int main()
{
	char ch;
	printf("enter the character \n");
	scanf("%c",&ch);
	
	if(ch >= 48 && ch <= 57)
		printf("you entered digit\n");
	else if(ch >= 65 && ch <= 90)
	       printf("you entered uppercase\n");
	else if(ch >= 97 && ch <= 122)
		printf("you entered lowercase\n");
	else
       		("enter the proper characters\n");
	return 0;
}

