// Write a Program to design a simple calculator.

#include<stdio.h>

int main(){
    int a,b;
    char op;
    float value;
    printf("Simple Calculator : \n");
    printf("It can perform addition(+), subtraction(-), multiplication(*) and division(/).\n");
    printf("Write the input in a form of axb : ");
    scanf("%d%c%d", &a,&op,&b);

    switch(op){
        case '+':
            printf("%d + %d = %d", a, b, a+b);
            break;
        case '-':
            printf("%d - %d = %d", a, b, a-b);
            break;
        case '*':
            printf("%d * %d = %d", a, b, a*b);
            break;
        case '/':
            if(b!=0){
                printf("%d / %d = %.2f", a, b, (float)a/b);
                break;
            } else{
                printf("Division by zero is not possible.");
                break;
            }
        default:
            printf("Wrong Input");
    }
    return 0;
}

// DAY-15 Problem
// Write a Program to print first 10 natural numbers.