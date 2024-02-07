#include <stdio.h>

// Define a structure with bit fields for a 32-bit integer
struct NibbleSwap {
    unsigned int nibble1 : 4; // Bit field for the first nibble
    unsigned int nibble2 : 4; // Bit field for the second nibble
    unsigned int nibble3 : 4; // Bit field for the third nibble
    unsigned int nibble4 : 4; // Bit field for the fourth nibble
};

int main() {
    unsigned int num;
    printf("Enter a 32-bit integer: ");
    scanf("%u", &num);

    // Create a struct of type NibbleSwap
    struct NibbleSwap ns;

    // Assign the integer to the struct
    ns.nibble1 = (num & 0xF0000000) >> 28;
    ns.nibble2 = (num & 0x0F000000) >> 24;
    ns.nibble3 = (num & 0x00F00000) >> 20;
    ns.nibble4 = (num & 0x000F0000) >> 16;

    // Swap the nibbles
    unsigned int result = (ns.nibble1 << 24) | (ns.nibble2 << 20) | (ns.nibble3 << 16) | (ns.nibble4 << 28);

    printf("Original number: %u\n", num);
    printf("Number after swapping nibbles: %u\n", result);

    return 0;
}

