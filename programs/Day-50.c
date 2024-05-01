// Write a Program to use array of pointers.

#include <stdio.h>

int main() {
    int var1 = 2;
    int var2 = 4;
    int var3 = 5;

    // array of pointers to integers
    int *ptr_arr[3] = {&var1, &var2, &var3};

    for (int i = 0; i < 3; i++) {
        printf("Value of var%d: %d\tAddress: %p\n", i + 1, *ptr_arr[i], ptr_arr[i]);
    }

    return 0;
}

// DAY 51 Problem
// Write a Program to add two complex numbers using structures.