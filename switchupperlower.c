#include<stdio.h>
int main()
{
	char ch ;
	printf("enter the characters\n");
	scanf("%c",&ch);

	switch(ch)
	{
		case 'A' ... 'Z':
			printf("you entered uppercase\n");
			break;
		case 'a' ... 'z':
			printf("you entered lowercase\n");
			break;
		case '0' ... '9':
			printf("you entered digit\n");
			break;
		default:
			printf("enter the proper character or digit\n");
	}
	return 0;
}


		
