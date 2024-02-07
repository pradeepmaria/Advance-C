#include<stdio.h>
int main()
{
	int num;
	printf("enter the number\n");
	scanf("%d",&num);
	 if(num < 0 && num % 2 == 0)
	 {
		 printf("%d is negative even number\n",num);
	 }
	 else if(num > 0 && num % 2 != 0)
	 {
		 printf("%d is either odd or even\n",num);
	 }
	 else if(num ==0)
	 {
		 printf("%d is either even or odd number\n",num);
	 }
	 
	 if(num > 0 && num % 2 == 0)
	 {
		 printf("%d is positive even number\n",num);
	 }
	 else if(num < 0 && num % 2 != 0)
	 {
		 printf("%d is negative odd number\n",num);
	 }
	 return 0;
}

