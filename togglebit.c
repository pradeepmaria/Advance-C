#include<stdio.h>
int main()
{
	int i,num,bitnum;
	printf("enter the number and bit position\n");
	scanf("%d %d",&num,&bitnum);

	i = num ^ (1<<bitnum);

	printf("%d\n",i);

}
