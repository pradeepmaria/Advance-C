#include <stdio.h>

int string_palindrome(char *arr) {
    int i = 0, my_strlen = 0, len = 0, count = 0;

    while (arr[i] != '\0' && arr[i] != '\n') {
        i++;
    }
    my_strlen = i;
    printf("string length is %d\n", i); // Print the length of the string
    len = my_strlen;

    for (i = 0; i < len / 2; i++) {
        if (arr[i] != arr[len - i - 1]) {
            return 1; // Return 1 if characters don't match
        }
    }
    return 0; // Return 0 if palindrome
}

int main() {
    int ret;
    char arr[20];
    fgets(arr, sizeof(arr), stdin);
    ret = string_palindrome(arr);

    if (ret == 0) {
        printf("Palindrome\n");
    } else {
        printf("Not Palindrome\n");
    }

    return 0;
}

