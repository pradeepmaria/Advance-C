#include <stdio.h>

int toggle_nbits_from_pos(int, int, int);

int main()
{
    int num, n, pos, res = 0;
    
    printf("Enter num, n and val:");
    scanf("%d%d%d", &num, &n, &pos);
    
    res = toggle_nbits_from_pos(num, n, pos);
    
    printf("Result = %d\n", res);
}
int toggle_nbits_from_pos(int num, int n, int pos)
{
	int i, res=0;
	if((pos - n) == 0)
	{
		for(i=1;i<=n;i++)
		{
			num = num ^(1<<i);
		}
		return num;
	}
	else if((pos - n) == -1)
	{
		for(i=pos;i<n;i++)
		{
			num = num ^(1<<i);
		}
		return num;
	}
	else
	{

	for(i=pos;i>=n;i--)
	{
	 num = num ^ (1<<i);
	}

	return num;
	}
}
