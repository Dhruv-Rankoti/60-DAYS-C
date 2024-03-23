// Write a Program to swap two numbers with and without using third variable.

#include<stdio.h>

int main(){
    int num1, num2;
    printf("Enter two numbers seperated by a space : ");
    scanf("%d %d", &num1, &num2);
    // by using third variable
    int var;
    var = num1;
    num1 = num2;
    num2 = var;
    printf("Numbers after swapping with third variable : (%d, %d)\n", num1, num2);

    // without using third variable
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    printf("Numbers after re-swapping without third variable : (%d, %d)", num1, num2);

    return 0;
}

// DAY-12 Problem
// Write a Program to find greatest of three numbers using if-else and ternery operator (Both).