#include <stdio.h>

int get_nbits_from_pos(int num, int n, int pos);

int main()
{
    int num, n, pos, res = 0;
    
    printf("Enter num, n and val:");
    scanf("%d%d%d", &num, &n, &pos);
    
    res = get_nbits_from_pos(num, n, pos);
    
    printf("Result = %d\n", res);
}
int get_nbits_from_pos(int num,int n,int pos)
{
	int res=0;
	if(pos>1)
	{
	
		 if( (pos-n) ==-1)
		{
			num = num & (1<<(pos+1))-1;
			return num;
		}
		else if((pos-n)==1)
		{
			num = num & (1<<pos)-1;
			num = num >> (n-1);
			return num;
		}
		else
		{

			num = num & (1<<pos)-1;
			return num;
		}
	}	
	else
	{
		num = num & (1<<pos)-1;
	}

}



