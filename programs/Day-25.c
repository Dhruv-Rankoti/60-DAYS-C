// Write a Program to show usage of logical and bitwise operator.

#include <stdio.h>

int main(){
    // a = 5(00000101), b = 43(00101011)
    unsigned char a = 5, b = 43;

    printf("a = %d, b = %d\n", a, b);

    // Bitwise AND operator
    // The result is 00000001
    printf("a & b = %d\n", a & b);

    // Bitwise OR operator
    // The result is 00101111
    printf("a | b = %d\n", a | b);

    // Bitwise XOR operator
    // The result is 00101110
    printf("a ^ b = %d\n", a ^ b);

    // Bitwise Compliment
    // The result is 11111010
    printf("~a = %d\n", a = ~a);

    // Shift Left
    // The result is 10101100
    printf("b << 1 = %d\n", b << 2);

    // Shift Right is 00001010
    printf("b >> 1 = %d\n", b >> 2);
    return 0;
}

// DAY-26 Problem
// Write a Program to find sum of geometric series.