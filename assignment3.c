#include<stdio.h>
int main()
{
        int num,num1=1,num2=0;
        printf("enter the num\n");
        scanf("%d",&num);
        if(num < 0)

        while(num1 >= num && num2 >= num)
        {
                if( num <= -num2)
                printf("%d ",num2);
                num1 = num1 - num2;
                if( num <= -num1)
                printf("%d ",num1);
                num2 = num2 - num1;
        }
        else
                printf("invalid input");

        printf("\n");

        return 0;
}

