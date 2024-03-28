// Write a Program to print table of a number.

#include <stdio.h>

int main(){
    int num;
    printf("Enter a number to print its table : ");
    scanf("%d", &num);
    for (int i = 1; i <= 10; i++){
        printf("%d x %d = %d\n", num, i, num * i);
    }
    return 0;
}

// DAY-17 Problem
// Write a Program to check whether given number is prime or not.