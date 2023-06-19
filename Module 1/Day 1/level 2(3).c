#include <stdio.h>

int isVowel(char cha) {
    int res;
    
    switch(cha) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            res = 1; // Vowel
            break;
        default:
            res = 0; // Not vowel
    }
    
    return res;
}

int main() {
    char character;
    printf("Enter a character: ");
    scanf(" %c", &character);
    
    int isVowelResult = isVowel(character);
    
    if (isVowelResult == 1) {
        printf("Vowel\n");
    } else {
        printf("Not a Vowel\n");
    }
    
    return 0;
}