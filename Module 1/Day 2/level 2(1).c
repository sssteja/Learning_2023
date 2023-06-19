#include <stdio.h>

void swapAlternateElements(int arr[], int size) {
    int i;
    for (i = 0; i < size - 1; i += 2) {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }
}

int main() {
    int arr1[] = {10, 20, 30, 40, 50};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    
    printf("Original Array: ");
    for (int i = 0; i < size1; i++) {
        printf("%d ", arr1[i]);
    }
    
    swapAlternateElements(arr1, size1);
    
    printf("\nSwapped Array: ");
    for (int i = 0; i < size1; i++) {
        printf("%d ", arr1[i]);
    }
    
    printf("\n\n");
    
    int arr2[] = {10, 20, 30, 40, 50, 60};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    
    printf("Original Array: ");
    for (int i = 0; i < size2; i++) {
        printf("%d ", arr2[i]);
    }
    
    swapAlternateElements(arr2, size2);
    
    printf("\nSwapped Array: ");
    for (int i = 0; i < size2; i++) {
        printf("%d ", arr2[i]);
    }
    
    return 0;
}