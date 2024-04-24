// Write a Program to check whether the entered string is Palindrome or not using user defined function.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to check if a string is palindrome or not
int isPalindrome(char *str) {
    int length = strlen(str);
    char newstr[length]; // Array to store cleaned-up string
    int j = 0;           // Length of cleaned-up string

    // Remove non-alphanumeric characters and convert to lowercase
    for (int i = 0; i < length; i++) {
        if (isalnum(str[i])) {
            newstr[j++] = tolower(str[i]);
        }
    }
    newstr[j] = '\0'; // Null-terminate the cleaned-up string

    // Check if the cleaned-up string is a palindrome
    for (int i = 0; i < j / 2; i++) {
        if (newstr[i] != newstr[j - i - 1]) {
            return 0; // Not a palindrome
        }
    }
    return 1; // Palindrome
}

int main() {
    char str[100];

    // Prompt user to enter a string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character from input
    str[strcspn(str, "\n")] = '\0';

    // Check if the input string is a palindrome
    if (isPalindrome(str)) {
        printf("The entered string is a palindrome.\n");
    } else {
        printf("The entered string is not a palindrome.\n");
    }

    return 0;
}

// DAY-44 Problem
// Write a Program to count number of uppercase, lowercase, digits and special characters in a string.