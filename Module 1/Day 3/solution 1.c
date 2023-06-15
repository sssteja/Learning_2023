#include <stdio.h>

void printPattern1(int n) {
    int i;
    for (i = 1; i <= n; i++) {
        printf("%d", i);
    }
    for (i = n; i >= 1; i--) {
        printf("%d", i);
    }
    printf("\n");
}

void printPattern2(int n) {
    int i;
    for (i = 1; i <= n; i++) {
        printf("%d", i);
    }
    for (i = 1; i <= (n - 1) * 2; i++) {
        printf(" ");
    }
    for (i = n; i >= 1; i--) {
        printf("%d", i);
    }
    printf("\n");
}

void printPattern3(int n) {
    int i;
    for (i = 1; i <= n; i++) {
        printf("%d", i);
    }
    for (i = 1; i <= (n - 1) * 2; i++) {
        printf(" ");
    }
    for (i = n; i >= 1; i--) {
        printf("%d", i);
    }
    printf("\n");
}

void printPattern(int n) {
    int i;
    for (i = n; i >= 1; i--) {
        printPattern1(i);
        if (i > 1) {
            printPattern2(i - 1);
        }
        if (i > 2) {
            printPattern3(i - 2);
        }
    }
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printPattern(n);
    return 0;
}