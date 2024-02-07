#include<stdio.h>
int main()
{
	int num,n,i;
	printf("enter the num and position of n:\n");
	scanf("%d %d",&num,&n);

	i = (num | (1 << n)-1) ;

	printf("%d\n",i);
	
	return 0;

}
