#include <stdio.h>

int circular_left(int num, int n);
int print_bits(int);

int main()
{
    int num, n, ret;
    
    printf("Enter the num:");
    scanf("%d", &num);
    
    printf("Enter n:");
    scanf("%d", &n);
    
    ret = circular_left(num, n);
    
    print_bits(ret);
}
int circular_left(int num, int n)
{
	int ret=0,a,b,n1=31,n2;
	a = num <<n;
	n2 = n1-n;
	b = num >> n2;
	ret = a|b;
	if(num < 0)
	{
		ret = (a/3)-1;
		return ret;
	}
	return ret;
}
int print_bits(int ret)
{
	int i;
	for(i=31;i>=0;i--)
	{
		 if((ret & 1 << i) != 0)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
	}

	printf("\n");

}

