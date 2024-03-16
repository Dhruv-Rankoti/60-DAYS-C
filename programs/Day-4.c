// Write a Program to convert temperature from Celcius to Farenheit.
// Formula => F = (9/5 x C) + 32

#include <stdio.h>
void main(){
    float f, c;
    printf("Enter temperature in celcius : ");
    scanf("%f", &c);
    f = (9.0 / 5.0 * c) + 32;
    printf("Temperatue : %0.1f degree farenheit.", f);
}

// DAY-5 Problem
// Write a Program to find the roots of a quadratic equation.