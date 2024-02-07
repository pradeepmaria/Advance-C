#include<stdio.h>
int main()
{
	int i,num,n;
	printf("enter the number and bit position\n");
	scanf("%d %d",&num,&n);

	i = num & (1 << (n)); 
	
		printf("%d\n",i);
	

return 0;
}

