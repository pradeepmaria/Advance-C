#include <stdio.h>

int replace_nbits_from_pos(int num, int a, int b, int val);

int main()
{
    int num, a, b, val, res = 0;
    
    printf("Enter num, a, b, and val:");
    scanf("%d%d%d%d", &num, &a, &b, &val);
    
    res = replace_nbits_from_pos(num, a, b, val);
    
    printf("Result = %d\n", res);
}
int replace_nbits_from_pos(int num, int a, int b, int val)
{
	int i,res,get,n;
	n=(b-a+1);
	
	get = num &(1<<n)-1;
	for(i=b;i>=n;i--)
	{
		
		val = val &(~(1<<i));
	}
	if((b-a) == 1)
	{

	get = get << b-1;
	}
	else
	{
		get = get << n;
	}

	res = val | get ;
	return res;
}

	
