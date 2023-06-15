#include <stdio.h>

void printBits(unsigned int num) {
    int i;
    unsigned int mask = 1 << 31; // Start with the leftmost bit (MSB)

    for (i = 0; i < 32; i++) {
        // Use bitwise AND to check if the current bit is set or not
        // If the result is non-zero, the bit is set (1); otherwise, it's not set (0)
        int bit = (num & mask) ? 1 : 0;

        printf("%d", bit);

        // Shift the mask one bit to the right
        mask >>= 1;
    }

    printf("\n");
}

int main() {
    unsigned int num;

    printf("Enter a 32-bit integer: ");
    scanf("%u", &num);

    printf("Binary representation: ");
    printBits(num);

    return 0;
}