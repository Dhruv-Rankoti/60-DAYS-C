// Write a Program to read array elements and print them with addresses.

#include <stdio.h>

int main(){
    int arr[5] = { 2, 4, 6, 3, 7 }; // initialization of an array
    printf("Element\t Address\n");
    for(int i = 0; i < 5; i++){
        printf("   %d\t %x\n", arr[i], &arr[i]);
    }
    return 0;
}

// DAY-31 Problem
// Write a Program to perform linear search on an array.