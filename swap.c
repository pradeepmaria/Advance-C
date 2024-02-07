#include <stdio.h>

// Macro to swap two values using a temporary variable
#define SWAP(a, b, type) { type temp = a; a = b; b = temp; }

int main() {
    int num1 = 5, num2 = 10;
    printf("Before swap: num1 = %d, num2 = %d\n", num1, num2);

    SWAP(num1, num2, int);

    printf("After swap: num1 = %d, num2 = %d\n", num1, num2);

    float x = 3.14, y = 2.71;
    printf("Before swap: x = %.2f, y = %.2f\n", x, y);

    SWAP(x, y, float);

    printf("After swap: x = %.2f, y = %.2f\n", x, y);

    char ch1 = 'A', ch2 = 'B';
    printf("Before swap: ch1 = %c, ch2 = %c\n", ch1, ch2);

    SWAP(ch1, ch2, char);

    printf("After swap: ch1 = %c, ch2 = %c\n", ch1, ch2);

    return 0;
}

