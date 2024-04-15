// Write a Program to find the second largest element of an array.

#include <stdio.h>

void secondLargestElement(int *arr, int size);

int main(){
    int size;
    int arr[] = {5, 3, 4, 6, 2, 7, 9, 15, 14, 8};
    size = sizeof(arr) / sizeof(arr[0]);

    secondLargestElement(arr, size);

    return 0;
}

void secondLargestElement(int *arr, int size){
    int t;
    for(int i = 0; i < size; i++){ // sorting the array in descending order
        for(int j = i + 1; j < size; j++){
            if(arr[i] < arr[j]){
                t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
    }

    for(int i = 0; i < size; i++){ // print second largest element
        if (arr[i] != arr[0]){
            printf("Second largest element of an array : %d", arr[1]);
            return;
        }
    }
    printf("Second largest element does not exist."); // no second largest element in the array
}

// DAY-35 Problem
// Write a Program to access elements of a 2 dimensional array and print the sum of all the elements in that array.