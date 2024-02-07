#include<stdio.h>
int main()
{
	 int count1=0,count2=0,i,num;
	printf("enter the number\n");
	scanf("%d",&num);
	for(i=31;i>=0;i--)
	{
		if((num & 1 << i) != 0)
		{
			printf("1");
			count1++;
		}
		else
		{
			printf("0");
			count2++;
		}
	}
	printf("\n");	
	printf("1's = %d,0's = %d\n",count1,count2);
	printf("\n");
	return 0;
}
