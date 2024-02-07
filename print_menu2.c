#include <stdio.h>

void print_menu(char **menu, int menu_size) {
    printf("Menu options:\n");
    for (int i = 0; i < menu_size; i++) {
        printf("%d. %s\n", i + 1, menu[i]);
    }
}

int main() 
{
    char *menu[] = {"File", "Edit", "View", "Insert", "Help"};
    int menu_size = sizeof(menu) / sizeof(menu[0]);
	printf("%d",menu_size);
    print_menu(menu, menu_size);

    int choice;
    printf("Select your option: ");
    scanf("%d", &choice);

    if (choice >= 1 && choice <= menu_size) {
        printf("You have selected %s Menu\n", menu[choice - 1]);
    } else {
        printf("Invalid option\n");
    }

    return 0;
}

