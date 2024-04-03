// Write a Program to print given patterns - 
// *                *
// **              * *
// ***            * * *
// ****          * * * *

#include <stdio.h>
int main(){
    int i, j;
    // Half pyramid
    for(i = 0; i < 4; i++){
        for(j = 0; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
    // Full pyramid
    for(i = 0; i < 4; i++){
        for(j = i; j < 3; j++){
            printf(" ");
        }
        for(j = 0; j <= i; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

// DAY-23 Problem
// Write a Program to swap two numbers using Call by Value and Call by Reference.