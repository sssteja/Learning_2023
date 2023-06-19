#include <stdio.h>
#include <string.h>

void sortNames(char *names[], int size) {
    int i, j;
    char *temp;
    
    for (i = 0; i < size - 1; i++) {
        for (j = i + 1; j < size; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                // Swap the pointers to rearrange the names
                temp = names[i];
                names[i] = names[j];
                names[j] = temp;
            }
        }
    }
}

int main() {
    char *names[] = {
        "Santosh", "Amol", "Santosh Jain", "Kishore", "Rahul", "Amolkumar", "Hemant"
    };
    int size = sizeof(names) / sizeof(names[0]);
    int i;
    
    printf("Names before sorting:\n");
    for (i = 0; i < size; i++) {
        printf("%s\n", names[i]);
    }
    
    sortNames(names, size);
    
    printf("\nNames after sorting:\n");
    for (i = 0; i < size; i++) {
        printf("%s\n", names[i]);
    }
    
    return 0;
}