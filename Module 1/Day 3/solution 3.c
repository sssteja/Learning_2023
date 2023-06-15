#include <stdio.h>

int findLargestNumber(int num) {
    int maxNumber = 0;
    int tempNum = num;

    for (int i = 0; i < 4; i++) {
        int divisor = 1;

        for (int j = 0; j < i; j++) {
            divisor *= 10;
        }

        int deletedDigit = (tempNum / (divisor * 10)) * divisor + (tempNum % divisor);
        if (deletedDigit > maxNumber) {
            maxNumber = deletedDigit;
        }
    }

    return maxNumber;
}

int main() {
    int number;

    printf("Enter a 4-digit number: ");
    scanf("%d", &number);

    int largestNumber = findLargestNumber(number);

    printf("Largest number after deleting a single digit: %d\n", largestNumber);

    return 0;
}