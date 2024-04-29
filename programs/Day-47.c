// Write a Program to increment/decrement a pointer.

#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int *ptr;
    ptr = arr;
    
    printf("Original array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");

    // Increment the pointer to point to the next element
    ptr++;

    printf("Array after incrementing pointer: ");
    for (int i = 0; i < 4; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");

    // Decrement the pointer to point to the previous element
    ptr--;

    printf("Array after decrementing pointer: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");

    return 0; 
}

// DAY 48 Problem
// Write a Program to use pointer to a pointer.