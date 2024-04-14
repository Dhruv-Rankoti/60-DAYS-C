// Write a Program to find maximum and minimum elements of an array.

#include <stdio.h>

void minmax(int *arr, int size){
    int min, max;
    min = arr[0];
    max = arr[0];
    for(int i = 0; i < size; i++){
        if(min > arr[i]){
            min = arr[i];
        }
        if(max < arr[i]){
            max = arr[i];
        }
    }
    printf("Minimum Element : %d\n", min);
    printf("Maximum Element : %d\n", max);
}

int main(){
    int size;
    int arr[] = {4, 2, 3, 7, 5, 9, 12, 8};
    size = sizeof(arr) / sizeof(arr[0]);
    minmax(arr, size);
    return 0;
}

// DAY-34 Problem
// Write a Program to find the second largest element of an array.