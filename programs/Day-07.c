// Write a Program to check whether the year entered is a leap year or not.

#include <stdio.h>
void main()
{
    int year;
    printf("Enter year : ");
    scanf("%d", &year);
    if (year % 4 == 0)
    {
        printf("%d is a leap year.", year);
    }
    else
    {
        printf("%d is not a leap year.", year);
    }
}

// DAY-8 Problem
// Write a program to check whether entered character is vowel, consonant or number.