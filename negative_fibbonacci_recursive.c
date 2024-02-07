#include<stdio.h>
int negative_fibbonacci(int n);
int main()
{
        int i=0,limit,ret;                             /*if you get the exact output for -8 for -2
							 for -1  to -1
							 for -10 to -4
		               				 for -21 to -13 */
        printf("Enter a number:");
        scanf("%d",&limit);

        if(limit < 0)
        {
		for(i=0;i<=-limit;i++)
		{
			
			ret = negative_fibbonacci(i);
			if(ret <= -limit+1)
			{

               		 printf("%d ",ret);
			}
		}
                printf("\n");
        }
        else
        {
                printf("Invalid input\n");
        }

        return 0;
}
int negative_fibbonacci(int n) 
{
    if (n == 0) 
    {
        return 0;
    
    } 
    else if (n == 1) 
    {
        return 1;
    } 
    else  
    {
        return negative_fibbonacci(n - 2) - negative_fibbonacci(n - 1);
    }
}


