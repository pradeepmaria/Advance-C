#include <stdio.h>

int customAtoi(const char *str) {
    int result = 0;
    int sign = 1;  // To handle negative numbers

    // Skip leading white spaces
    while (*str == ' ' || *str == '\t') {
        str++;
    }

    // Check for a sign (+/-)
    if (*str == '-') {
        sign = -1;
        str++;
    } else if (*str == '+') {
        str++;
    }

    // Process each character in the string
    while (*str >= '0' && *str <= '9') {
        result = result * 10 + (*str - '0');
        str++;
    }

    return result * sign;
}

int main() {
    char str[100];

    printf("Enter a numeric string: ");
    scanf("%s", str);

    int num = customAtoi(str);

    printf("String to integer is %d\n", num);

    return 0;
}

