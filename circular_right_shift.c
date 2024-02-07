#include<stdio.h>
int main()
{
	int num1,c, num,n,i,a,b,res;
	printf("enter the number num and shifting bits n:");
	scanf("%d%d",&num,&n);
	if(num > 0)
	{
		a = num >> n;
		n = 31 - n;
		b = num << n;
		res = a | b;
		 printf("binary value of result = ");
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
	}
	else
	{	
		printf("binary value of num %d:",num);
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

		a = num >> n;
		printf("binary value of a %d:",a);
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
		int toggle;

		for(i=31;i>=0;i--)
		{
			toggle = num ^(1<<i);
		}
		 printf("toggle value: %d",toggle);
		printf("\n");

		printf("binary value of toggle = %d:",toggle);
                for(i=31;i>=0;i--)
                {
                        if((num & 1<<i) == 0)
                        {

                                printf("1");
                        }
                        else
                        {
                                printf("0");
                        }
                }
                printf("\n");

		n = 31 - n;
		b = 11 << n;
		printf("binary value of b %d:",b);
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

		 for(i=31;i>=0;i--)
                {
                        b = b ^(1<<i);
                }
                 printf("b value: %d",b);
                printf("\n");

		printf("binary value of b %d:",b);
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
	
		res = a & b;
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


