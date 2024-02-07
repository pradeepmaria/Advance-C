#include<stdio.h>
int main()
{
        int num,n,i,ans;
        printf("enter the num and bit position n:\n");
        scanf("%d%d",&num,&n);

        ans = (num &(~ (1<<(n)))) ;

        printf("%d\n",ans);
	 printf("binary value of %d:",ans);
                for(i=31;i>=0;i--)
                {
                        if((ans & 1<<i) == 0)
                        {
                                printf("0");
                        }
                        else
                        {
                                printf("1");
                        }
                }
                printf("\n");


        return 0;
}

