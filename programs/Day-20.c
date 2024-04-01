// Write a Program to print first n odd numbers and their sum.

#include <stdio.h>

int main(){
    int n, sum;
    sum = 0;
    printf("Enter n : ");
    scanf("%d", &n);
    printf("First %d odd numbers : ", n);
    for(int i = 1; i < n * 2; i += 2){ // increment by 2 for i;
        printf("%d ", i);
        sum += n;
    }
    printf("\nSum : %d", sum);
    return 0;
}

// DAY-21 Problem
// Write a Program to print Fibonacci Series (in numbers).