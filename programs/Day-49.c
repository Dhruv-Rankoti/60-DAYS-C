// Write a Program to return pointer from a function.

#include <stdio.h>

int * returnPointer () {
    static int val = 5;
    return &val;
}

int main() {
    int *ptr;

    ptr = returnPointer();

    printf("Address: %p\n", ptr);
    printf("Value at address: %d\n", *ptr);

    return 0;
}

// DAY 50 Problem
// Write a Program to use array of pointers.