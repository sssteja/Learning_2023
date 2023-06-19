#include <stdio.h>

void encode(char *str, int shift) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = 'a' + (str[i] - 'a' + shift) % 26;
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = 'A' + (str[i] - 'A' + shift) % 26;
        }
        i++;
    }
}

void decode(char *str, int shift) {
    encode(str, 26 - shift); // Decoding is the same as encoding with the reverse shift
}

int main() {
    char str[] = "Hello, World!";
    int shift = 5;
    
    printf("Original String: %s\n", str);
    
    encode(str, shift);
    printf("Encoded String: %s\n", str);
    
    decode(str, shift);
    printf("Decoded String: %s\n", str);
    
    return 0;
}