// Write a Program to check whether given number is prime or not.

#include <stdio.h>

int main(){
    int num, flag;
    flag = 0;
    printf("Enter a number to check whether it is a prime number or not : ");
    scanf("%d", &num);
    if(num < 2){ // 0 and 1 are not prime numbers.
        flag = 1;
    }
    for(int i = 2; i <= num/2; i++){
        if(num % i == 0){
            flag = 1;
            break;
        }
    }
    if(flag == 1){
        printf("%d is not a prime number.", num);
    } else{
        printf("%d is a prime number.", num);
    }
    return 0;
}

// DAY-18 Problem
// Write a Program to calculate factorial of a number.