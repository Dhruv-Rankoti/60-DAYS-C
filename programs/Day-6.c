// Write a Program to calculate Simple and Compound interest.
// SI = Principal x Rate/100 x Time
// CI = Principal(1 + Rate/100)^Time - Principal

#include <stdio.h>
#include <math.h>
void main()
{
    float p, r, t, si, ci;
    printf("Enter principal amount, rate and time in year seperated by space : ");
    scanf("%f %f %f", &p, &r, &t);
    // Simple Interest
    si = p * r * t / 100;
    printf("Simple Interest : %.2f\n", si);

    // Compound Interest
    ci = p * pow(1 + r / 100, t) - p;
    printf("Compound Interest : %.2f", ci);
}

// DAY-7 Problem
// Write a Program to check whether the year entered is a leap year or not.