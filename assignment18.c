#include <stdio.h>

int print_bits(int num, int n);

int main()
{
    int num, n,ret;
    
    printf("Enter num, n :\n");
    scanf("%d%d", &num, &n);
    
    printf("Binary form of %d:", num);
     print_bits(num, n);
    
 }
int print_bits(int num, int n)
{
	int i;
	for(i=n-1;i>=0;i--)
	{
		if((num & 1<<i) == 0)
		{
			printf("0");
		}
		else
		{
			printf("1");

		}
	}
	printf("\n");
}
