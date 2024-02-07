#include<stdio.h>
int main()
{
	int j,i,num,bitnum;
	printf("enter the number and bit position\n");
        scanf("%d %d",&num,&bitnum);
	
	i = num | (1 << bitnum);
	printf("%d\n",i);
	for(j=32;j>=0;j--)
	{
		if((i & 1<< j) == 0)
		{
			printf("0");
		}
		else
			printf("1");
	}
	printf("\n");

	
}	
