// Write a Program for Binary Search.

#include <stdio.h>

int binarySearch(int *arr, int size, int target, int start, int end){
    int middle;
    if(start > end) // target element not found in the array if start > end
        return -1;

    middle = (start + end) / 2;

    if(arr[middle] == target) // if target element found
        return middle;

    if(arr[middle] > target) // search the left half
        return binarySearch(arr, size, target, start, middle - 1);

    if(arr[middle] < target) // search the right half
        return binarySearch(arr, size, target, middle + 1, end);
}

int main(){
    int size, target, index;
    int arr[7] = {2, 3, 5, 7, 9, 12, 14}; // sorted array
    size = sizeof(arr) / sizeof(arr[0]);
    printf("Enter the target : ");
    scanf("%d", &target);

    index = binarySearch(arr, size, target, 0, size-1); // binarySearch(arr, size, target, start, end) where start = 0 and end = size-1

    if(index == -1){
        printf("Element not found");
    } else{
        printf("Element found at index : %d", index);
    }
    return 0;
}

// DAY-33 Problem
// Write a Program to find maximum and minimum elements of an array.