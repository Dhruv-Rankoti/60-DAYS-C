// Write a Program to sort the values of an array using selection sort technique.

#include <stdio.h>

void selectionSort(int arr[], int size) {
    int minIndex, temp;
    for (int i = 0; i < size; i++) {
        // Find the index of the minimum element in the unsorted part of the array
        minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Swap the minimum element with the first element of the unsorted part
        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int main() {
    int arr[] = {2, 1, 4, 2, 7, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array:");
    for (int i = 0; i < n; i++) {
        printf(" %d", arr[i]);
    }

    selectionSort(arr, n);

    printf("\nSorted array:");
    for (int i = 0; i < n; i++) {
        printf(" %d", arr[i]);
    }
    printf("\n");

    return 0;
}

// DAY 59 Problem
// Write a Program to sort the values of an array using Bubble sort technique.