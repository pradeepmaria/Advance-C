#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[])
{
	int sum=0,i;
	
	for(i=1;i<argc;i++)
	{	
		 int num = atoi(argv[i]);
		 
		 sum = sum+num;
	}
	printf("%d\n",sum);

	return 0;

}

