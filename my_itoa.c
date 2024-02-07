#include <stdio.h>
#include <stdlib.h>

void customItoa(int num, char *str) {
    int i = 0;
    int isNegative = 0;

    // Handle the case of a negative number
    if (num < 0) {
        isNegative = 1;
        num = -num;
    }

    // Handle the case of 0
    if (num == 0) {
        str[i++] = '0';
    } else {
        // Convert digits to characters in reverse order
        while (num != 0) {
            int digit = num % 10;
            str[i++] = '0' + digit;
            num /= 10;
        }

        // Reverse the string to get the correct order
        for (int j = 0; j < i / 2; j++) {
            char temp = str[j];
            str[j] = str[i - j - 1];
            str[i - j - 1] = temp;
        }
    }

    // Add a minus sign if it's a negative number
    if (isNegative) {
        str[i++] = '-';
    }

    // Null-terminate the string
    str[i] = '\0';
}

int main() {
    int num;
    char str[100];

    printf("Enter the number: ");
    scanf("%d", &num);

    customItoa(num, str);

    printf("Integer to string is %s\n", str);

    return 0;
}

