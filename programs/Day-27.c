// Write a recursive Program to print first m fibonacci numbers.
// fib[n] = fib[n-1] + fib[n-2] , where the first two terms are '0' and '1'.

#include <stdio.h>

void fibonacci(int a, int b, int sum, int m);

int main(){
    int m;
    printf("Enter the number of terms : ");
    scanf("%d", &m);
    printf("Fibonacci Series : ");

    // first term as 0
    // second term as 1

    fibonacci(0, 1, 0, m);// fibonacci(first term, second term, sum of first and second, total terms)
    return 0;
}

void fibonacci(int a, int b, int sum, int m){
    if(m != 0){
        printf("%d ", a);
        sum = a + b;
        a = b;
        b = sum;
        fibonacci(a, b, sum, m-1);
    }
}

// DAY-28 Problem
// Write a Program to calculate cube of a number using function.