#include<stdio.h>
int main()
{
	int j,i,num,bitnum;
	printf("enter the number\n");
	scanf("%d",&num);

	 for(j=31;j>=0;j--)
        {
                if(( num & 1 << j) == 0)
                {
                        printf("0");
                }
                else
                        printf("1");
        }
	 printf("\n");

	 printf("enter the bitnum\n");
	 scanf("%d",&bitnum);
	  for(j=31;j>=0;j--)
        {
                if((bitnum & 1 << j) == 0)
                {
                        printf("0");
                }
                else
                        printf("1");
        }

	 printf("\n");

	i = num & (~ (1 << bitnum));

	printf("clear bit is : ");
	printf("%d\n",i);
	for(j=31;j>=0;j--)
	{
		if((i & 1 << j) == 0)
		{
			printf("0");
		}
		else
			printf("1");
	}
	printf("\n");

}


