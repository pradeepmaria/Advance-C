#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the 3 numbers:\n");
	scanf("%d %d %d",&a,&b,&c);

	(a>b) && (a>c) ? printf("%d",a) : (b>c) && (b>a) ? printf("%d",b) : (c>b) && (c>a) ? printf("%d",c) : printf("enter proper no:");
 
	printf("\n");
}	

