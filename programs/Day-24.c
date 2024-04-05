// Write a Program to find factorial of a number using recursion.

#include <stdio.h>

unsigned long long int factorial(int num);

int main(){
    int num;
    printf("Enter a number to find its factorial : ");
    scanf("%d", &num);
    printf("Factorial : %llu", factorial(num));
    return 0;
}

unsigned long long int factorial(int num){
    if(num >= 1){
        return num * factorial(num - 1);
    } else{
        return 1;
    }
}

// DAY-25 Problem
// Write a Program to show usage of logical and bitwise operator.