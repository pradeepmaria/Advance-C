#include <stdio.h>
#include<string.h>
void reverse_recursive(char str[], int index, int length)
{
	
	if(index >= length)
	{
		return ;
	}
	else
	{

	char ch = str[index];
	str[index] = str[length];
	str[length] = ch;

	reverse_recursive(str,index+1,length-1);
	}
}

int main()
{
    char str[30];
    
    
    printf("Enter any string : ");
    scanf("%[^\n]", str);
    int length = strlen(str);
    reverse_recursive(str, 0, length-1);
    
    printf("Reversed string is %s\n", str);
}
