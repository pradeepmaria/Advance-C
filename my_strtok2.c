#include <stdio.h>
#include <string.h>

char *my_strtok(char *str, const char *delim) 
{
    static char *input = NULL;
    if (str != NULL) 
    {
        input = str;
    }

    if (input == NULL || *input == '\0') 
    {
        return NULL;
    }

    while (*input != '\0' && strchr(delim, *input) != NULL) 
    {
        input++;
    }

    char *token_start = input;
    while (*input != '\0' && strchr(delim, *input) == NULL) 
    {
        input++;
    }

    if (*input != '\0') 
    {
        *input = '\0';
        input++;
    }

    return token_start;
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
    printf("Tokens:\n");

    while (token != NULL) 
    {
        printf("%s\n", token);
        token = my_strtok(NULL, delim);
    }

    return 0;
}

