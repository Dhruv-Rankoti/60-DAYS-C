// Write a Program to count number of words in a string using user defined function.

#include <stdio.h>

// Function to count the number of words in a string
int countWords(char str[]) {
    int count = 0;
    int inside_word = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t') {
            inside_word = 0;
        } else if (!inside_word) {
            count++;
            inside_word = 1;
        }
    }

    return count;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int words = countWords(str);
    printf("Number of words in the string: %d\n", words);

    return 0;
}

// DAY-42 Problem
// Write a Program to concatenate two strings using user defined function.