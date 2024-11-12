// Demonstrate the use of typedef by creating a custom data type that represents complex numbers (float real and float imaginary) and performs basic operations like addition and subtraction

#include <stdio.h>
typedef struct {
    float real;
    float imaginary;
} Complex;

// Function for addition
Complex add(Complex a, Complex b) {
    Complex result;
    result.real = a.real + b.real;
    result.imaginary = a.imaginary + b.imaginary;
    return result;
}

// Function for subtraction
Complex subtract(Complex a, Complex b) {
    Complex result;
    result.real = a.real - b.real;
    result.imaginary = a.imaginary - b.imaginary;
    return result;
}

int main() {
    Complex num1 = {2.5, 3.5};  
    Complex num2 = {1.5, 2.0};  

    Complex sum = add(num1, num2);
    Complex difference = subtract(num1, num2);

    printf("Number 1: %.2f + %.2fi\n", num1.real, num1.imaginary);
    printf("Number 2: %.2f + %.2fi\n", num2.real, num2.imaginary);

    printf("Sum of num1 and num 2 : %.2f + %.2fi\n", sum.real, sum.imaginary);
    printf("Difference of num1 and num 2 : %.2f + %.2fi\n", difference.real, difference.imaginary);

    return 0;
}
