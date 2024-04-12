// Write a Program to perform linear search on an array.
// A linear search sequentially checks each element of the list until it finds an element that matches the target value. If the algorithm reaches the end of the list, the search terminates unsuccessfully.

#include <stdio.h>

int linearSearch(int *arr, int size, int target){ // passing array with its size
    for(int i = 0; i < size; i++){
        if(arr[i] == target){
            return i; //return the index at which the element is found
        }
    }
    return -1;
}

int main(){
    int size, target, index;
    int arr1[12] = {5, 7, 2, 9, 4, 3, 5, 11, 24, 42, 8, 10};
    size = sizeof(arr1) / sizeof(arr1[0]);
    printf("Enter the element to search : ");
    scanf("%d", &target);

    index = linearSearch(arr1, size, target);

    if(index == -1){
        printf("Element not found.");
    } else{
        printf("Element found at arr[%d].", index);
    }

    return 0;
}

// DAY-32 Problem
// Write a Program for Binary Search.