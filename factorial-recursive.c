#include<stdio.h>

int fun(int a);

int main()
{
    int x, ret;
    printf("Enter the number: ");
    scanf("%d", &x);
    ret = fun(x);
    printf("%d\n", ret);
    return 0;
}

int fun(int a)
{
    int ret; 

    if (a > 0)
    {
        ret = fun(a - 1);
        return a * ret;
    }
    else
    {
        return 1;
    }
}
