#include<stdio.h>
int main()
{
	int a,n,rem,r=0;
	printf("enter the number\n");
	scanf("%d",&n);
	a=n;

	while(n!=0)
	{
		rem= n%10;
		r = r*10+rem;
		n = n/10;
	}
	if(a==r)
	

		printf("yes it is palindrome\n");
	else 
		printf("no it is not palindrome\n");
		
	return 0;

}


