#include <stdio.h>

struct Complex {
    float real;
    float imag;
};

// Function to read a complex number
struct Complex readComplex() {
    struct Complex num;

    printf("Enter the real part: ");
    scanf("%f", &num.real);

    printf("Enter the imaginary part: ");
    scanf("%f", &num.imag);

    return num;
}

// Function to write a complex number
void writeComplex(struct Complex num) {
    printf("Complex number: %.2f + %.2fi\n", num.real, num.imag);
}

// Function to add two complex numbers
struct Complex addComplex(struct Complex num1, struct Complex num2) {
    struct Complex result;

    result.real = num1.real + num2.real;
    result.imag = num1.imag + num2.imag;

    return result;
}

// Function to multiply two complex numbers
struct Complex multiplyComplex(struct Complex num1, struct Complex num2) {
    struct Complex result;

    result.real = (num1.real * num2.real) - (num1.imag * num2.imag);
    result.imag = (num1.real * num2.imag) + (num1.imag * num2.real);

    return result;
}

int main() {
    struct Complex num1, num2, sum, product;

    printf("Enter the first complex number:\n");
    num1 = readComplex();

    printf("Enter the second complex number:\n");
    num2 = readComplex();

    printf("\n");

    printf("First complex number:\n");
    writeComplex(num1);

    printf("Second complex number:\n");
    writeComplex(num2);

    printf("\n");

    sum = addComplex(num1, num2);
    printf("Sum of the complex numbers:\n");
    writeComplex(sum);

    product = multiplyComplex(num1, num2);
    printf("Product of the complex numbers:\n");
    writeComplex(product);

    return 0;
}