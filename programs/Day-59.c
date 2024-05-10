// Write a Program to sort the values of an array using Bubble sort technique.

#include <stdio.h>

// Function to perform bubble sort
void bubbleSort(int *arr, int size) {
    int temp;
    for (int i = 0; i < size - 1; i++) {
        // Last i elements are already in place, so no need to check them again
        for (int j = 0; j < size - i - 1; j++) {
            // Swap adjacent elements if they are in the wrong order
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        
    }
}

int main() {
    int n;
    int arr[] = {5, 4, 2, 3, 1};
    n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array:");
    for (int i = 0; i < n; i++) {
        printf(" %d", arr[i]);
    }

    // Sort the array using bubble sort
    bubbleSort(arr, n);

    printf("\nSorted array:");
    for (int i = 0; i < n; i++) {
        printf(" %d", arr[i]);
    }
    printf("\n");

    return 0;
}

// DAY-60 Problem
// Write a Program to sort the values of an array using Insertion sort technique.