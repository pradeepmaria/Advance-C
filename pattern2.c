#include<stdio.h>
int main()
{
	int i;
	for(i=1;i<=12;i++)
	{
		if(i>=4 && i<=6)
			printf("*");
		else if(i>=10 && i<=12)
			printf("@");
		else
			printf("$");
	}
	printf("\n");
	return 0;
}
	
