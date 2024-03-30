// Write a Program to calculate factorial of a number.

#include <stdio.h>

int main(){
    int num;
    unsigned long long int fact;
    fact = 1;
    printf("Enter a number : ");
    scanf("%d", &num);
    for(int i = 1; i <= num; i++){
        fact *= i;
    }
    if(num >= 0){
        printf("Factorial of %d is %llu.", num, fact);
    } else{
        printf("Error! Factorial of a negative number doesn't exist.");
    }
    return 0;
}

// DAY-19 Problem
// Write a Program to calculate primes between 1 to 100.