#include <stdio.h>

int findCharType(char ch) {
    int result;
    
    if (ch >= 'A' && ch <= 'Z') {
        result = 1; // Uppercase letter
    } else if (ch >= 'a' && ch <= 'z') {
        result = 2; // Lowercase letter
    } else if (ch >= '0' && ch <= '9') {
        result = 3; // Digit
    } else if (ch >= 32 && ch <= 126) {
        result = 4; // Printable symbol
    } else {
        result = 5; // Non-printable symbol
    }
    
    return result;
}

int main() {
    char character;
    printf("Enter a character: ");
    scanf(" %c", &character);
    
    int charType = findCharType(character);
    
    switch (charType) {
        case 1:
            printf("Uppercase letter\n");
            break;
        case 2:
            printf("Lowercase letter\n");
            break;
        case 3:
            printf("Digit\n");
            break;
        case 4:
            printf("Printable symbol\n");
            break;
        case 5:
            printf("Non-printable symbol\n");
            break;
        default:
            printf("Invalid character\n");
    }
    
    return 0;
}