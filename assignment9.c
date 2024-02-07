#include<stdio.h>
int main()
{
	int n,day;
	printf(" Enter the value of 'n' : ");
	scanf("%d",&n);

	if(n>=1 && n<=365)
	{

	printf("Choose First Day :\n");
	printf("1. Sunday\n");
	printf("2. Monday\n");
	printf("3. Tuesday\n");
	printf("4. Wednesday\n");
	printf("5. Thursday\n");
	printf("6. Friday\n");
	printf("7. Saturday\n");
	
	

	printf("Enter the option to set the first day : ");
	scanf("%d",&day);

	 if(day >= 1 && day <= 7)
	 {
		
		switch(day)
		{
				case '1':
					printf("The day is Sunday\n");
					break;
				case '2':
					printf("The day is Monday\n");
					break;
				case '3':
					printf("The day is Tuesday\n");
					break;
				case '4':
					printf("The day is Wednesday\n");
					break;
				case '5':
					printf("The day is Thursday\n");
					break;
				case '6':
					printf("The day is Friday\n");
					break;
				case '7':
					printf("The day is saturday\n");
					break;
				default:
					printf("Error: Invalid input, first day should be > 0 and <= 7\n");
			}
	}
	else
	{
		printf("Error: Invalid input, first day should be > 0 and <= 7\n");

	}
	}

	else
    	{
      	printf("Error: Invalid Input, n value should be > 0 and <= 365\n");
    	}
		
}		

			
	
			
