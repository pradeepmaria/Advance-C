#include<stdio.h>
int main()
{
        int i,num,n;
        printf("enter the num and bit position n:\n");
        scanf("%d %d",&num,&n);

        i = (num & (1 << n)) -1 ;
	
        printf("%d\n",i);

        return 0;
}

