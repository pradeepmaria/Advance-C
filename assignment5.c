#include<stdio.h>
int main()
{
	int i,A,R,N;
	int AP,GP;
	float HP;

	printf("enter the first number 'A':");
	scanf("%d",&A);
	printf("enter the common difference/ratio 'R':");
	scanf("%d",&R);
	printf("enter the number of terms 'N':");
	scanf("%d",&N);
	
	if(A >= 0 && R >= 0 && N >= 0)
	{

	printf("AP series = ");
	AP =A;
	for(i=1;i<=N;i++)
	{
		printf("%d ",AP);
		AP = AP + R;
	}
	printf("\n");
	
	printf("GP series = ");
	GP = A;
	for(i=1;i<=N;i++)
	{ 

		printf("%d ",GP);
		GP = R * GP;

	}
	printf("\n");
		
	float HP;
	HP = A;
	printf("HP series = ");
	for(i=1;i<=N;i++)
	{
		
		HP = 1/(float)A;
		printf("%f ",HP);
		A = A + R;
	}
	}
	else
		printf("invalid");
	printf("\n");

	return 0;
}

