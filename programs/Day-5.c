// Write a Program to find the roots of a quadratic equation.
// ax² + bx + c = 0
// d(discriminant) = b² - 4ac

#include <stdio.h>
#include <math.h>
void main()
{
    double a, b, c, d;
    double r1, r2;
    printf("ax%c+bx+c = 0\n", 253); // 253 is the ascii value of '²';
    printf("Enter a, b, c seperated by a space : ");
    scanf("%lf %lf %lf", &a, &b, &c);
    d = b * b - 4 * a * c;
    if (d > 0)
    { // Roots are real and distinct;
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        printf("Roots are %.2lf and %.2lf.", r1, r2);
    }
    else if (d == 0)
    { // Roots are real and equal;
        r1 = -b / (2 * a);
        r2 = r1;
        printf("Roots are %.2lf and %.2lf.", r1, r2);
    }
    else
    { // Roots are imaginary;
        r1 = -b / (2 * a);
        r2 = -d / (2 * a);
        printf("Roots are %.2lf+i(%.2lf) and %.2lf-i(%.2lf).", r1, r2, r1, r2);
    }
}

// DAY-6 Problem
// Write a Program to calculate Simple and Compund interest.