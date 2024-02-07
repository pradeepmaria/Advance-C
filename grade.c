#include<stdio.h>
int main()
{
	int num;
	printf("enter the num: ");
	scanf("%d",&num);
	if(50 <= num && 60 > num)
	
		printf("second class\n");
	
	else if(60 <= num && 85 > num)
	
		printf("first class\n");
	
	else if(85 <= num && 100 >=  num)
	
		printf("distinction\n");
	
	else
	
	printf("enter the proper no: \n");
	
	return 0;
}
