#include <stdio.h>

// Macro to get the nth bit of an integer
#define GET_BIT(number, n) (((number) >> (n)) & 1)

// Macro to set the nth bit of an integer
#define SET_BIT(number, n) ((number) |= (1 << (n)))

// Macro to clear the nth bit of an integer
#define CLEAR_BIT(number, n) ((number) &= ~(1 << (n)))

int main() {
    int number, n;

    printf("Enter an integer: ");
    scanf("%d", &number);

    printf("Enter the bit position (0-31): ");
    scanf("%d", &n);

    printf("Original number: %d\n", number);

    int bit = GET_BIT(number, n);
    printf("Bit at position %d is: %d\n", n, bit);

    SET_BIT(number, n);
    printf("Number after setting bit %d: %d\n", n, number);

    CLEAR_BIT(number, n);
    printf("Number after clearing bit %d: %d\n", n, number);

    return 0;
}

