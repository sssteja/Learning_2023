#include <stdio.h>

int find_greatest(int a, int b, int c) {
    if (a >= b && a >= c) {
        return a;
    }
    else if (b >= a && b >= c) {
        return b;
    }
    else {
        return c;
    }
}

int main() {
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    int result = find_greatest(num1, num2, num3);
    printf("The greatest number is: %d\n", result);

    return 0;
}