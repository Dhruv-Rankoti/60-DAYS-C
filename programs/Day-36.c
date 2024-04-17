// Write a menu driven Program for the matrices and do the following operations using the matrices :
// (a) Addition of 2 matrices
// (b) Subtraction of 2 matrices
// (c) Product of 2 matrices
// (d) Transpose of a matrix
// (e) Upper and lower triangular matrix

#include <stdio.h>
#include <stdlib.h>

// Function prototypes
void menu();
void addMatrices(int **mat1, int **mat2, int rows, int cols);
void subtractMatrices(int **mat1, int **mat2, int rows, int cols);
void multiplyMatrices(int **mat1, int **mat2, int rows1, int cols1, int cols2);
void transposeMatrix(int **matrix, int rows, int cols);
void upperLowerTriangular(int **matrix, int rows, int cols);

// Function to allocate memory for a matrix
int **allocateMatrix(int rows, int cols) {
    int **matrix = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int *)malloc(cols * sizeof(int));
    }
    return matrix;
}

// Function to free memory allocated for a matrix
void freeMatrix(int **matrix, int rows) {
    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);
}

// Function to input a matrix from user
void inputMatrix(int **matrix, int rows, int cols) {
    printf("Enter the elements of the matrix row-wise, separated by space:\n");
    for (int i = 0; i < rows; i++) {
        printf("Row %d: ", i + 1);
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}


// Function to print a matrix
void printMatrix(int **matrix, int rows, int cols) {
    printf("Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int choice;
    int rows1, cols1, rows2, cols2;

    printf("Enter the number of rows and columns of first matrix: ");
    scanf("%d %d", &rows1, &cols1);
    printf("Enter the number of rows and columns of second matrix: ");
    scanf("%d %d", &rows2, &cols2);

    if (rows1 != rows2 || cols1 != cols2) {
        printf("Matrices must have the same dimensions for addition, subtraction, and multiplication.\n");
        return 1;
    }

    // Allocate memory for matrices
    int **matrix1 = allocateMatrix(rows1, cols1);
    int **matrix2 = allocateMatrix(rows2, cols2);

    printf("Enter elements of first matrix:\n");
    inputMatrix(matrix1, rows1, cols1);
    printf("Enter elements of second matrix:\n");
    inputMatrix(matrix2, rows2, cols2);

    do {
        menu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addMatrices(matrix1, matrix2, rows1, cols1);
                break;
            case 2:
                subtractMatrices(matrix1, matrix2, rows1, cols1);
                break;
            case 3:
                multiplyMatrices(matrix1, matrix2, rows1, cols1, cols2);
                break;
            case 4:
                transposeMatrix(matrix1, rows1, cols1);
                break;
            case 5:
                upperLowerTriangular(matrix1, rows1, cols1);
                break;
            case 0:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please enter a valid option.\n");
        }
    } while (choice != 0);

    // Free allocated memory
    freeMatrix(matrix1, rows1);
    freeMatrix(matrix2, rows2);

    return 0;
}

// Function to display the menu
void menu() {
    printf("\nMenu:\n");
    printf("1. Addition of 2 matrices\n");
    printf("2. Subtraction of 2 matrices\n");
    printf("3. Product of 2 matrices\n");
    printf("4. Transpose of a matrix\n");
    printf("5. Upper and lower triangular matrix\n");
    printf("0. Exit\n");
}

// Function to add two matrices
void addMatrices(int **mat1, int **mat2, int rows, int cols) {
    int **result = allocateMatrix(rows, cols);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    printMatrix(result, rows, cols);

    freeMatrix(result, rows);
}

// Function to subtract two matrices
void subtractMatrices(int **mat1, int **mat2, int rows, int cols) {
    int **result = allocateMatrix(rows, cols);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] - mat2[i][j];
        }
    }

    printMatrix(result, rows, cols);

    freeMatrix(result, rows);
}

// Function to multiply two matrices
void multiplyMatrices(int **mat1, int **mat2, int rows1, int cols1, int cols2) {
    int **result = allocateMatrix(rows1, cols2);

    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    printMatrix(result, rows1, cols2);

    freeMatrix(result, rows1);
}

// Function to transpose a matrix
void transposeMatrix(int **matrix, int rows, int cols) {
    int **result = allocateMatrix(cols, rows);

    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            result[i][j] = matrix[j][i];
        }
    }

    printMatrix(result, cols, rows);

    freeMatrix(result, cols);
}

// Function to find upper and lower triangular matrix
void upperLowerTriangular(int **matrix, int rows, int cols) {
    int **upper = allocateMatrix(rows, cols);
    int **lower = allocateMatrix(rows, cols);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i < j) {
                upper[i][j] = matrix[i][j];
                lower[i][j] = 0;
            } else if (i == j){
                upper[i][j] = matrix[i][j];
                lower[i][j] = matrix[i][j];
            } else {
                upper[i][j] = 0;
                lower[i][j] = matrix[i][j];
            }
        }
    }

    printf("Upper triangular matrix:\n");
    printMatrix(upper, rows, cols);
    printf("Lower triangular matrix:\n");
    printMatrix(lower, rows, cols);

    freeMatrix(upper, rows);
    freeMatrix(lower, rows);
}


// DAY-37 Problem
// Write a Program to use library string functions.