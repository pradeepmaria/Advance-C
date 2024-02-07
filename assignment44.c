#include<stdio.h>

int pangram(char *str)
{
	int count =0;
	char arr[27]={0};
	for(int i=0;str[i] != '\0';i++)
	{
		if(str[i] >= 65 && str[i] <= 95)
		{
			arr[str[i] - 65] += 1;
		}
		else if(str[i] >= 97 && str[i] <= 122)
		{
			arr[str[i] - 97] += 1;
		}
		
	}
	for(int i=0;i<26;i++)
	{
		if(arr[i] == 0)
			return 0;
	}
	return 1;
}
int main()
{
	int ret;
	char str[100];
	printf("Enter the string:");
	scanf("%[^\n]",str);

	ret = pangram(str);
	if(ret == 1)
	{
		printf("The entered string is a pangram string\n");
	}
	else
		printf("The entered string is not a pangram string\n");
	return 0;
}
