// Write a Program to add two complex numbers using structures.

#include <stdio.h>

// Define a structure for complex number
struct Complex {
    float real;
    float img;
};

int main() {
    struct Complex c1;
    struct Complex c2;
    struct Complex sum;

    // Input first complex number
    printf("Enter real and imaginary parts of first complex number: ");
    scanf("%f %f", &c1.real, &c1.img);
    // Input second complex number
    printf("Enter real and imaginary parts of second complex number: ");
    scanf("%f %f", &c2.real, &c2.img);

    // Add two complex numbers
    sum.real = c1.real + c2.real;
    sum.img = c1.img + c2.img;

    printf("Addition: (%.2f) + i(%.2f)", sum.real, sum.img);

    return 0;
}

// DAY 52 Problem
// Write a Program to store information of n students using structures.