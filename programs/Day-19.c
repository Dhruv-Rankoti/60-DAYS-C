// Write a Program to calculate primes between 1 to 100.

#include <stdio.h>

int main(){
    int flag;
    flag = 1;
    printf("Prime numbers(1-100) : ");
    for(int i = 1; i <= 100; i++){ // starting i=1 ; ending i=100; where 'i' will be checked for prime
        for(int j = 2; j <= i/2; j++){
            if(i % j == 0){
                flag = 0;
                break;
            }
        }
        if(flag == 1 && i != 1){
            printf("%d ", i);
        } else{
            flag = 1;
        }
    }
    return 0;
}

// DAY-20 Problem
// Write a Program to print first n odd numbers and their sum.