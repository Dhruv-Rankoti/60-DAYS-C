// Write a Program to find sum of geometric series.

#include <stdio.h>

float sumOfGeometric(float a, float r, int n);

int main(){
    int n;
    float a, r, sum;
    printf("Enter first term of the series : ");
    scanf("%f", &a);
    printf("Enter common ratio : ");
    scanf("%f", &r);
    printf("Enter total number of terms : ");
    scanf("%d", &n);

    sum = sumOfGeometric(a, r, n);
    printf("Sum of geometric series : %.2f", sum);
    return 0;
}

float sumOfGeometric(float a, float r, int n){
    if(n >= 1){
        return a + sumOfGeometric(a*r, r, n-1);
    } else{
        return 0;
    }
}

// DAY-27 Problem
// Write a recursive Program to print first m fibonacci numbers.