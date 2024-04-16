// Write a Program to access elements of a 2 dimensional array and print the sum of all the elements in that array.

#include <stdio.h>

int main(){
    int sum, row, column;
    int arr[5][2] = {{1,2}, {3,4}, {5,6}, {7,8}, {9,10}}; // arr[number of rows][number of columns];
    // order of matrix =  5 x 2

    // To access elements of 2D array, you must specify the index number of both the row and column.
    // To access the element at 3rd row(index 2) and 2nd column(index 1)
    printf("Element at 3rd row and 2nd column : %d\n", arr[2][1]);

    sum = 0;
    row = sizeof(arr) / sizeof(arr[0]); // length of row
    column = sizeof(arr[0]) / sizeof(arr[0][0]); // length of column
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            sum += arr[i][j];
        }
    }
    printf("Sum of all elements in the given 2 dimensional array : %d", sum);
    return 0;
}

// DAY-36 Problem
// Write a menu driven Program for the matrices and do the following operations using the matrices :
// (a) Addition of 2 matrices
// (b) Subtraction of 2 matrices
// (c) Product of 2 matrices
// (d) Transpose of a matrix
// (e) Upper and lower triangular matrix