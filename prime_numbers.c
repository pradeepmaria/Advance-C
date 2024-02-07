#include<stdio.h>
int main()
{
        int i,j,num,count=0;
        printf("enter the number\n");
        scanf("%d",&num);
	if( num > 0)
	{

        for(i=1;i<=num;i++)
        {
		count = 0;
		for(j=2;j<=num;j++)
		{
			
                	if(i % j == 0)
                	{
                        	count++;
                	}
        	}
        		if (count == 1)

                		printf("%d ",i);
                
	}
	}
	else
		printf("please enter a positive number which is >1");
	printf("\n");

        return 0;
}

