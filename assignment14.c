#include<stdio.h>
int get_n_bits(int a,int b);

int main()
{
	int num,n,ret;
	printf("enter the number num and bit position n:");
	scanf("%d %d",&num,&n);

	ret= get_n_bits(num,n);
	printf("%d\n",ret);
	return 0;
}

int get_n_bits(int a,int b)
{
	int i;
	i = (a & (1 << b) -1);
	return i;
}
