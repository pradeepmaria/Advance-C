#include <stdio.h>
#include<string.h>

void squeeze(char str1[], char str2[])
{
	int i,j,k,len1,len2;
	len1 = strlen(str1);
	len2 = strlen(str2);
	for(i=0;str1[i] != '\0';i++)
	{
		for(j=0;str2[j] != '\0';j++)
		{
			if(str1[i] == str2[j])
			{
				for(k=i;k<len1;k++)
				{
					str1[k] = str1[k+1];
				}
			
			}
		}
	}
	
}


int main()
{
    char str1[30], str2[30];
    
    printf("Enter string1:");
    scanf(" %[^\n]", str1);
    

    printf("Enter string2:");
    scanf(" %[^\n]", str2);
    
    squeeze(str1, str2);
    
    printf("After squeeze s1 : %s\n", str1);
    
}
