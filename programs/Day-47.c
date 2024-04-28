// Write a Program to use pointer to a pointer.

#include <stdio.h>

int main(){
    int var = 5;
    int *ptr;
    int **p_ptr; // declares a pointer to a pointer to an integer

    ptr = &var; // storing address of var in ptr
    p_ptr = &ptr; // storing address of ptr in p_ptr

    // print the value of var
    printf("Value of var = %d\n", var);

    // print the value of var using single pointer
    printf("Value of var using single pointer = %d\n", *ptr);

    // print the value of var using double pointer
    printf("Value of var using double pointer = %d\n", **p_ptr);

    return 0;
}

// DAY 48 Problem
// Write a Program to increment/decrement a pointer.