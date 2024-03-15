// Write a Program to check whether number is even or odd.

#include<stdio.h>
void main(){
    int num;
    printf("Enter any number : ");
    scanf("%d", &num);
    if(num%2==0){
        printf("%d is even", num);
    } else{
        printf("%d is odd", num);
    }
}

// DAY-4 Problem
// Write a Program to convert temperature from Celcius to Farenheit.