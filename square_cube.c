#include<stdio.h>

int square_cube(int a,int *square,int *cube)
{
	*square = a * a;
	*cube = a * a * a;
	 return 0;
}

int main()
{
	int square ,cube ,x;
	printf("enter a number\n");
	scanf("%d",&x);
	square_cube(x,&square,&cube);
	printf("%d\n",square);
	printf("%d\n",cube);
	return 0;
}

