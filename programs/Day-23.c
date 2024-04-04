// Write a Program to swap two numbers using Call by Value and Call by Reference.

#include <stdio.h>

void callByValue(int num1, int num2);
void callByReference(int *num1, int *num2);

int main(){
    int a, b;
    printf("Enter two numbers seperated by a space : ");
    scanf("%d %d", &a, &b);

    callByValue(a, b); // Note that the changes made using Call by Value does not reflect on variables in main()
    printf("Values after swapping by Call by Values -\n");
    printf("num1 : %d\tnum2 : %d\n", a, b);

    callByReference(&a, &b); // function variable is pointing to the same memory location as the original parameters, thus the changes made in Call by Reference reflect in main()
    printf("Values after swapping by Call by Reference -\n");
    printf("num1 : %d\tnum2 : %d\n", a, b);
    return 0;
}

void callByValue(int num1, int num2){
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
}

void callByReference(int *num1, int *num2){
    *num1 = *num1 + *num2;
    *num2 = *num1 - *num2;
    *num1 = *num1 - *num2;
}

// DAY-24 Problem
// Write a Program to find factorial of a number using recursion.