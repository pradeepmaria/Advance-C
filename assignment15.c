#include <stdio.h>

int replace_nbits(int num, int n , int val);

int main()
{
	int num,n, val, res = 0;
    
    printf("Enter num, n and val:");
    scanf("%d%d%d", &num, &n, &val);
    
    res = replace_nbits(num, n, val);
    
    printf("Result = %d\n", res);
}
int replace_nbits(int num,int n,int val)
{
	int res = 0;
	num = num & ~ 1<<n-1;
	val = val & (1 << n) -1;
	res = num | val;
	return res;
}
