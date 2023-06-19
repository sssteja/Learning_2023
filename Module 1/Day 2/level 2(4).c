#include <stdio.h>

char *xstrchr(char *string, char ch) {
    while (*string != '\0') {
        if (*string == ch) {
            return string; // Return the pointer to the first occurrence of the character
        }
        string++;
    }
    
    return NULL; // Character not found, return NULL
}

int main() {
    char str[] = "Hello, World!";
    char ch = 'o';
    
    char *result = xstrchr(str, ch);
    
    if (result != NULL) {
        printf("Character '%c' found at address: %p\n", ch, (void *)result);
    } else {
        printf("Character '%c' not found.\n", ch);
    }
    
    return 0;
}