#include <stdio.h>
int replace_blank(char *str1,char *str2)
{
	int i,flag=0,j=0;
	for(i=0; str1[i] != '\0';i++)
         {
                if(str1[i] == ' ' || str1[i] == '\t')
                {
                        if(flag==0)
                        {
				//str2[i] = str1[i];
                              str2[j] = ' ';
			      j++;
                                flag=1;
                        }
			else
			{
				//str2[i] = str1[i];
		        }

                }
                else
                {
                        flag=0;
		//	str2[i] = str1[i];
			str2[j] = str1[i];
			j++;
                }	
        }
	str2[j] = '\0';
	return str2[j];
	//return str2[i];
}
int main()
{
    char str1[50];
    char str2[50];
    printf("Enter the string with more spaces in between two words\n");
    scanf("%[^\n]", str1);
    
    replace_blank(str1,str2);
    
    printf("%s\n", str2);
}
