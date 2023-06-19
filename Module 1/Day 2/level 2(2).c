#include <stdio.h>

int compareBoxes(int boxA[], int boxB[], int size) {
    int i, j, found;
    
    // Check each item in boxA
    for (i = 0; i < size; i++) {
        found = 0;
        
        // Search for the corresponding item in boxB
        for (j = 0; j < size; j++) {
            if (boxA[i] == boxB[j]) {
                found = 1;
                break;
            }
        }
        
        // If the item in boxA is not found in boxB, return 0
        if (found == 0) {
            return 0;
        }
    }
    
    // Check each item in boxB to ensure there are no extra items not found in boxA
    for (i = 0; i < size; i++) {
        found = 0;
        
        // Search for the corresponding item in boxA
        for (j = 0; j < size; j++) {
            if (boxB[i] == boxA[j]) {
                found = 1;
                break;
            }
        }
        
        // If the item in boxB is not found in boxA, return 0
        if (found == 0) {
            return 0;
        }
    }
    
    // If all items are matched in both boxes, return 1
    return 1;
}

int main() {
    int boxA[] = {200, 10, -90};
    int boxB[] = {-90, 200, 10};
    int size = 3;
    
    int result = compareBoxes(boxA, boxB, size);
    
    if (result == 1) {
        printf("Equal Boxes\n");
    } else {
        printf("Unequal Boxes\n");
    }
    
    return 0;
}