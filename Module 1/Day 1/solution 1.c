#include<stdio.h>

int main() {
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Using if-else option
    if (num1 > num2) {
        printf("Using if-else option: %d is the greatest.\n", num1);
    } else {
        printf("Using if-else option: %d is the greatest.\n", num2);
    }

    // Using ternary operator option
    int greatest = (num1 > num2) ? num1 : num2;
    printf("Using ternary operator option: %d is the greatest.\n", greatest);

    return 0;
}