#include<stdio.h>
int main()
{
	int num,i;
	printf("enter the number num:\n");
	scanf("%d",&num);

	for(i=31;i>=0;i--)
	{
		if(i == 3 || i == 7 || i == 11 || i == 15 || i == 19 || i == 23 || i == 27 || i == 31)
	//		if( i = 4*i-1)
			printf(" ");
			
	//	num >> i & 1 ? printf("1"):printf("0");

		printf("%d",num >> i & 1 ? 1:0);
	}
	printf("\n");

	return 0;
}
