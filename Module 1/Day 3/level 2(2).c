#include <stdio.h>

#define DECIMAL_TO_BCD(decimal) (((decimal / 10) << 4) | (decimal % 10))

void decimalToBCD(unsigned char decimal, unsigned char *bcd_high, unsigned char *bcd_low) {
    *bcd_high = DECIMAL_TO_BCD(decimal / 10);
    *bcd_low = DECIMAL_TO_BCD(decimal % 10);
}

int main() {
    unsigned char decimal = 43; // Example decimal number
    
    unsigned char bcd_high, bcd_low;
    
    decimalToBCD(decimal, &bcd_high, &bcd_low);
    
    printf("Decimal: %d\n", decimal);
    printf("BCD (High): 0x%02X\n", bcd_high);
    printf("BCD (Low): 0x%02X\n", bcd_low);
    
    return 0;
}