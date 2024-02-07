#include<stdio.h>

int getword(char str[])
{
	int count=0;
	int i;
	for(int i=0;str[i] != '\0';i++)
	{
		if(str[i] == ' ')
		{
			str[i] = '\0';
			break;
		}
		else
		{
			count++;
		}
	}
	return count;
}
int main()
{
        int len = 0;
	    char str[100];

		printf("Enter the string : ");
		scanf(" %[^\n]", str);

		len = getword(str);

        printf("You entered %s and the length is %d\n", str, len);
}
