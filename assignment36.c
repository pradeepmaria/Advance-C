#include<stdio.h>

int my_atoi(char str[])
{
	int result=0,value;
	int sign=1;
	if(*str == '-' )
	{
		sign = -1;
		*str++;
	}
	else if(*str == '+')
	{
		*str++;
	}
	while(*str >= '0' && *str <= '9')
	{

		value = *str - '0';
		result = result * 10 + value;
		str++;		
	}
	return sign*result;
}


int main()
{
    char str[20];
    
    printf("Enter a numeric string : ");
    scanf("%s", str);
    
    printf("String to integer is %d\n", my_atoi(str));
}
