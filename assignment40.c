#include <stdio.h>
#include<string.h>

char *my_strtok(char str[], const char delim[])
{
	int i=0,j=0,k=0;
    static int ind = 0;                         //index making static beacue again we come in function it sholud start form that position where we left
    static char *temp;
    k = ind;
    if(str != NULL)                             //chechking if str is not equal to null
        temp = str;                             //if true than storing in static temp

    for(ind;temp[ind]!='\0';ind++)
    {
            for(j=0;delim[j]!='\0';j++)
            {
                if(temp[ind] == delim[j])               //if s1 charc match with s2 delimeter
                {
                        temp[ind] = '\0';               //then make as null
                        ind++;
                        return (temp + k);             //returning that address
                 }
            }
    }

    if(temp[k] == '\0')                         //if temp is match with null
            return NULL;                        //RETURN NULL
    return (temp+k);                            //or returning that address
}

int main()
{
    char str[50]; 
    char delim[50];
    
      printf("Enter the string: ");
    scanf(" %[^\n]", str);

    printf("Enter the delimiter: ");
    scanf(" %[^\n]", delim);


    char *token = my_strtok(str, delim);
    printf("Tokens :\n");
    
    while (token)
    {
	    if(*token != '\0')
	    {

        	printf("%s\n", token);
	    }
        token = my_strtok(NULL, delim);
    }
}
