// Write a Program to count number of lowercase, uppercase, digits and special characters present in the contents of a text file.

#include <stdio.h>

int main() {
    char ch;
    int countLower = 0, countUpper = 0, countDigit = 0, countSpecial = 0;
    FILE *fptr; // File pointer

    fptr = fopen("text.txt", "r"); // Open text file in read mode

    // Check if file opened successfully
    if (fptr == NULL) {
        printf("Error: Unable to open the file.\n");
        return 1; // Exit with error code
    }

    // Iterate through each character in the file
    while ((ch = fgetc(fptr)) != EOF) {
        // Increment counters based on character category
        if (ch >= 'a' && ch <= 'z') countLower++;
        else if (ch >= 'A' && ch <= 'Z') countUpper++;
        else if (ch >= '0' && ch <= '9') countDigit++;
        else countSpecial++;
    }

    // Print the counts of each category
    printf("Lowercase: %d\nUppercase: %d\nDigits: %d\nSpecial Characters: %d\n", countLower, countUpper, countDigit, countSpecial);

    fclose(fptr); // Close the file

    return 0; // Exit successfully
}

// DAY 58 Problem
// Write a Program to sort the values of an array using selection sort technique.