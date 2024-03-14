// Write a Program to check whether entered number is positive or negative.

#include<stdio.h>
void main(){
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    if(num>0){
        printf("Entered number is positive.");
    } else if(num<0){
        printf("Entered number is negative.");
    } else {
        printf("Entered number is zero.");
    }
}

// DAY-3 Problem
// Write a Program to check whether number is even or odd.