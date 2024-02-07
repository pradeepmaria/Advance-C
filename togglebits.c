#include<stdio.h>
int main()
{
        int num,n,i;
        printf("enter the number and bit position n:\n");
        scanf("%d %d",&num,&n);

        i = (num ^ (1 << n));

        printf("%d\n",i);

        return 0;
}

