#include <stdio.h>
#include <string.h>

int main() {
    char name[50];
    int age;
    char id[20];
    char mobile[15];

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';  // Remove the newline character

    printf("Enter your age: ");
    scanf("%d", &age);
    getchar();  // Consume the newline character

    printf("Enter your ID: ");
    fgets(id, sizeof(id), stdin);
    id[strcspn(id, "\n")] = '\0';  // Remove the newline character

    printf("Enter your mobile number: ");
    fgets(mobile, sizeof(mobile), stdin);
    mobile[strcspn(mobile, "\n")] = '\0';  // Remove the newline character

    printf("\nUser Information:\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("ID: %s\n", id);

    if (strlen(mobile) == 10) {
        printf("Mobile Number: %s\n", mobile);
    } else {
        printf("Invalid mobile number\n");
    }

    return 0;
}

