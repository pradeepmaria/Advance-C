#include<stdio.h>
int main()
{
	int num1,c, num,n,i,a,b,res;
	printf("enter the number num and shifting bits n:");
	scanf("%d%d",&num,&n);
//	if(num > 0)
	{
		printf("binary value of %d:",num);
		for(i=31;i>=0;i--)
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

		a = num << n;
		printf("binary value of %d:",a);
        	for(i=31;i>=0;i--)
        	{
                	if((a & 1<<i) == 0)
                	{
                        	printf("0");
                	}
                	else
                	{
                        	printf("1");
                	}
        	}
		printf("\n");
		n = 31 - n;
		b = num >> n;
		printf("binary value of %d:",b);
        	for(i=31;i>=0;i--)
        	{
                	if((b & 1<<i) == 0)
                	{
                        	printf("0");
                	}
                	else
                	{
                        	printf("1");
                	}
        	}
        	printf("\n");
//		res = b ^ (1<<num);
	
		res = a | b;
	 	printf("binary value of %d:",res);
        	for(i=31;i>=0;i--)
        	{
                	if((res & 1<<i) == 0)
                	{
                        	printf("0");
                	}
                	else
                	{	
                        	printf("1");
                	}
        	}
        	printf("\n");
		if(num < 0)
		{

		c = (a/2)-1;
		printf("binary value of %d:",c);
                for(i=31;i>=0;i--)
                {
                        if((c & 1<<i) == 0)
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
	}
	
/*	else
	{
		num1 = num + ((-2*num)-1);
		a = num1 << n;
		b = num1 >>(31 -n);
		c = a | b;
		 printf("binary value of %d:",c);
        	for(i=31;i>=0;i--)
        	{
                	if((c & 1<<i) == 0)
                	{
                        	printf("0");
                	}
                	else
                	{
                        	printf("1");
                	}
        	}
        	printf("\n");
		int ans;
		res = c ^ c;
		
		printf("binary value of %d:",res);
                for(i=31;i>=0;i--)
                {
                        if((res & 1<<i) == 0)
                        {
                                printf("0");
                        }
                        else
                        {
                                printf("1");
                        }
                }
                printf("\n");
	}*/
}

