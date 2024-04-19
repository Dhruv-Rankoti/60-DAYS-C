// Write a Program to find length of a string without using user defined function.

#include <stdio.h>

int main(){
    // Define a character array to store the input string
    char str[100];

    // Ask the user to input a string
    printf("Enter a string : ");
    scanf("%[^\n]", str);

    // Calculate the length of the string
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }

    // Print the length of the string
    printf("Length of the string: %d", len);

    return 0;
}

// DAY-39 Problem
// Write a Program to reverse a string using user defined function.