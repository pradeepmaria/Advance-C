#include<stdio.h>

int fun(int a,int b);

int main()
{
    int x,y,ret;
    printf("Enter the number and power: ");
    scanf("%d%d",&x,&y);
    ret = fun(x,y);
    printf("%d\n", ret);
    return 0;
}

int fun(int a,int b)
{
    int ret;

    if (b > 0)
    {
        ret = fun(a,b - 1);
        return a * ret;
    }
    else
    {
        return 1;
    }
}

