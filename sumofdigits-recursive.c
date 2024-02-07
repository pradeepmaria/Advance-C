#include<stdio.h>

int fun(int n);

int main()
{
    int n,ret;
    printf("Enter the number: ");
    scanf("%d",&n);
    ret = fun(n);
    printf("%d\n", ret);
    return 0;
}

int fun(int n)
{
    int sum=0,ret;

    if (n > 0)
    {
	    sum = sum+n%10;
        ret = fun(n/10);
        return sum+ret;
    }
    else
    {
        return 0;
    }
}

