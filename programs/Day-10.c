// Write a Program to display size of Integer, Floating Point and Character using size of operator.

#include<stdio.h>

int main(){
    int intType;
    float floatType;
    char charType;
    printf("Size of integer : %u byte(s)\n", sizeof(intType));
    printf("Size of floating point : %u byte(s)\n", sizeof(floatType));
    printf("Size of character : %u byte(s)", sizeof(charType));
}

// DAY-11 Problem
// Write a Program to swap two numbers with and without using third variable.