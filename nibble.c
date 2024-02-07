#include <stdio.h>

// Macro to swap the nibbles in a byte
#define SWAP_NIBBLES(byte) (((byte & 0x0F) << 4) | ((byte & 0xF0) >> 4))

int main() {
    unsigned char byte;

    printf("Enter a byte in hexadecimal (0x00 - 0xFF): ");
    scanf("%hhx", &byte);

    unsigned char swappedByte = SWAP_NIBBLES(byte);

    printf("Original byte: 0x%02X\n", byte);
    printf("Byte with swapped nibbles: 0x%02X\n", swappedByte);

    return 0;
}

