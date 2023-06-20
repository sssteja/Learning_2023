#include <stdio.h>

// Structure definition
struct Structure {
    int value;
};

// Function to rotate the array of structures
void rotateArrayOfStructures(struct Structure arr[], int n, int K) {
    K = K % n;  // Handle cases where K > n
    
    // Rotate the array in three steps
    reverse(arr, 0, n - 1);
    reverse(arr, 0, K - 1);
    reverse(arr, K, n - 1);
}

// Function to reverse a portion of the array
void reverse(struct Structure arr[], int start, int end) {
    while (start < end) {
        struct Structure temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main() {
    // Create an array of structures
    struct Structure arr[] = {{1}, {2}, {3}, {4}, {5}};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Rotate the array by 2 positions
    rotateArrayOfStructures(arr, n, 2);

    // Print the rotated array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i].value);
    }
    printf("\n");

    return 0;
}
