// Write a Program to display the characters for the ASCII value and vice versa.

#include<stdio.h>

int main(){
    char ch;
    int asc;
    // To print ASCII values
    printf("Enter any character : ");
    scanf("%c", &ch);
    printf("ASCII value of '%c' : '%d'\n", ch, ch);
    
    // To print character values
    printf("Enter any ASCII value(0-255) : ");
    scanf("%d", &asc);
    printf("Character at ASCII value '%d' : '%c'", asc, asc);
    return 0;
}

// DAY-10 Problem
// Write a Program to display size of Integer, Floating Point and Character using size of operator.