#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the 3 numbers\n");
	scanf("%d %d %d",&a,&b,&c);

	if(a>b && a>c)
		printf("%d is greater\n",a);
	else if(b>c && b>a)
		printf("%d is greater\n",b);
	else if(c>a && c>b)
		printf("%d is greater\n",c);
	else 
		printf("enter the proper order of no: \n");
	return 0;
}
