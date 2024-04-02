// Write a Program to print Fibonacci Series (in numbers).
// Fibonacci Series : 0 1 1 2 3 5 8 and so on
// nth term of fibonacci = sum of last 2 terms in the series

#include<stdio.h>

int main(){
    int a, b, fibo, num; // a and b are first 2 terms
    a = 0;
    b = 1;
    fibo = a + b;
    printf("Enter a number : ");
    scanf("%d", &num);
    if(num == 1){ // displays the first two terms which is always 0 and 1
        printf("Fibonacci Series (%d): 0 ", num);
    } else if(num > 1){
        printf("Fibonacci Series (%d): 0 1 ", num);
    } else{
        printf("No series");
    }
    for(int i = 0; i < num-2; i++){
        printf("%d ", fibo);
        a = fibo;
        fibo += b;
        b = a;
    }
    return 0;
}

// DAY-22 Problem
// Write a Program to print given patterns - 
// *                *
// **              * *
// ***            * * *
// ****          * * * *