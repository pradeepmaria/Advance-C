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
        int ret=0,a,b,i,toggle;
        if(num > 0)
        {
                a = num >> n;
                n = 32 - n;
                b = num << n;
                ret = a | b;
                 return ret;
	}
	else
	{
                a = num >> n;

                for(i=31;i>=0;i--)
                {
                        toggle = num ^(1<<i);
                }
		 n = 32 - n;
                b = 11 << n;
		for(i=31;i>=0;i--)
                {
                        b = b ^(1<<i);
                }
		  
		ret = a & b;
                 return ret;
	}
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

