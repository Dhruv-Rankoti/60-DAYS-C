// Write a Program to sort the values of an array using Insertion sort technique.

#include <stdio.h>


// Function to perform insertion sort
void insertionSort(int *arr, int size) {
    int temp;
    int i, j;
    for (i = 0; i < size; i++) {
        temp = arr[i];
        j = i - 1;
        // Move elements of arr[0..i-1], that are greater than key, to one position ahead of their current position
        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = temp;
    }
}

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf(" %d", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {23, 1, 10, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array:");
    printArray(arr, n);

    // Sort the array using insertion sort
    insertionSort(arr, n);

    printf("Sorted array:");
    printArray(arr, n);

    return 0;
}

// DAY COMPLETED