#include<stdio.h>
int main()
{
	int num,n,i,pos;
	printf("enter the number num and bit 'n' and position 'pos':");
	scanf("%d%d%d",&num,&n,&pos);
	
	printf("left shift--");
	for(i=7;i>=0;i--)
	{
		if((num & 1 << i) == 0)
		{
		printf("0");
		}
		else
		{
		printf("1");
		}
	}
	printf("\n");
	
	printf("rightshift--");
	 for(i=7;i>=0;i--)
        {
                if((num >> i & 1) == 0)
                {
                printf("0");
                }
                else
                {
                printf("1");
                }
        }
	 printf("\n");
	
	 i = num & (1<<pos);
	 printf("%d\n",i);
	i = (num >> pos & 1)-1;
	printf("%d\n",i);

}	

