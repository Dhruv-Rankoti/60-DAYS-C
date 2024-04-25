// Write a Program to count number of uppercase, lowercase, digits and special characters in a string.

#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int uppercase = 0;
    int lowercase = 0;
    int digits = 0;
    int special = 0;

    for (int i = 0; i < strlen(str) - 1; i++) { // excludes the '\n' character at the end of the string
        if (str[i] >= 'A' && str[i] <= 'Z') {
            uppercase++;
        } else if (str[i] >= 'a' && str[i] <= 'z') {
            lowercase++;
        } else if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        } else {
            special++;
        }
    }

    printf("Uppercase : %d\n", uppercase);
    printf("Lowercase : %d\n", lowercase);
    printf("Digits : %d\n", digits);
    printf("Special Characters : %d\n", special);
    
    return 0;
}

// DAY-45 Problem
// Write a Program to sort a list of strings into alphabetical order.