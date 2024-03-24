// Write a Program to find greatest of three numbers using if-else and ternery operator (Both).

#include <stdio.h>
int main(){
    int a, b, c;
    printf("Enter three numbers seperated by a space : ");
    scanf("%d %d %d", &a, &b, &c);

    // using if-else operator
    if (a > b && a > c){
        printf("%d is the greatest.\n", a);
    } else if (b > c){
        printf("%d is the greatest.\n", b);
    } else{
        printf("%d is the greatest.\n", c);
    }

    // using ternery operator
    (a > b && a > c) ? printf("%d is the greatest.\n", a) : (b > c) ? printf("%d is the greatest.\n", b) : printf("%d is the greatest.\n", c);
    return 0;
}

// DAY-13 Problem
// Write a Program to calculate area of circle, triangle, square, rectangle or parallelogram based on user's choice.