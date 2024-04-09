// Write a Program to calculate cube of a number using function.

#include <stdio.h>

int cubeOfNumber(int num);

int main(){
    int num, cube;
    printf("Enter number : ");
    scanf("%d", &num);
    cube = cubeOfNumber(num);
    printf("Cube of %d = %d", num, cube);
    return 0;
}

int cubeOfNumber(int num){
    int cube;
    cube = num * num * num;
    return cube;
}

// DAY-29 Problem
// Write a program to check whether the entered number is armstrong or not.