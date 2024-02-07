#include <stdio.h>
#include <string.h>

int main() 
{
    char storedUsername[] = "user123";
    char storedPassword[] = "pass456";

    char inputUsername[50];
    char inputPassword[50];

    printf("Enter your username: ");
    fgets(inputUsername,50,stdin);
    inputUsername[strcspn(inputUsername, "\n")] = '\0';
    

    printf("Enter your password: ");
    fgets(inputPassword,50,stdin);
    inputPassword[strcspn(inputPassword, "\n")] = '\0';

    if (strcmp(inputUsername, storedUsername) == 0 && strcmp(inputPassword, storedPassword) == 0) 
    {
        printf("Authentication successful!\n");
        
        printf("\nFill in the blanks:\n");
        printf("I ___ to school by bus.\n");
        printf("The sun ___ in the east.\n");

        char answer1[20], answer2[20];
        printf("\nEnter your answer for the first blank: ");
        scanf("%s", answer1);
        
        printf("Enter your answer for the second blank: ");
        scanf("%s", answer2);

        if (strcmp(answer1, "go") == 0 && strcmp(answer2, "rises") == 0) 
	{
            printf("Congratulations, you solved the puzzle!\n");
        } 
	else 
	{
            printf("Sorry, your answers are incorrect.\n");
        }
    } 
    else 
    {
        printf("Authentication failed!\n");
    }

    return 0;
}

