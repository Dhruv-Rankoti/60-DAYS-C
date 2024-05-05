// Write a Program to open a file, read its content and close it.

#include <stdio.h>

int main() {
    FILE *fptr; // File Pointer
    char content[1000]; // Array to store content read from file

    // Open file in read mode
    fptr = fopen("text.txt", "r");
    
    // Check if opened successfully
    if (fptr == NULL) {
        printf("File not opened.");
        return 1; // Return error code
    }

    // Read content from file
    while (fgets(content, sizeof(content), fptr) != NULL) {
        printf("%s", content);
    }

    // Close file
    fclose(fptr);

    return 0; // Return success code
}

// DAY 55 Problem
// An array of record contains information of managers and workers of a company. Write a Program to print all the data of workers and managers in a separate file.