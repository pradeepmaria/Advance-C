#include <stdio.h>
int itoa(int num, char str[])
{
	int i=0;
	int negative = 0;
	
	if(num < 0)
	{
		negative = 1;
		num = -num;
	}
	while (num != 0) 
	{
             int digit = num % 10;
             str[i++] = '0' + digit;
             num = num / 10;
        }
	if(negative == 1)
	{
		str[i++] = '-';
	}
		
	for (int j = 0; j < i / 2; j++) 
	{
            	char temp = str[j];
            	str[j] = str[i - j - 1];
            	str[i - j - 1] = temp;
        }
	str[i] = '\0';
}
int main()
{
    int num;
    int ret;
    char str[10];

    printf("Enter the number:");
    scanf("%d", &num);
    if(ret = num)
    {
     itoa(num, str);

    printf("Integer to string is %s\n", str);
    }
    else
    {
	        printf("Integer to string is %d\n", ret);
    }
    return 0;
}
