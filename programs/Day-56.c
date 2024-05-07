// Write a Program to copy one file to another using command line arguments.

#include <stdio.h>

int main(int argc, char *argv[]) {
    FILE *sourceFile, *destinationFile;
    char ch;

    // Check if correct number of command line arguments are provided
    if (argc != 3) {
        printf("Usage: %s <source_file> <destination_file>\n", argv[0]);
        return 1;
    }

    // Open source file in read mode
    sourceFile = fopen(argv[1], "r");
    if(sourceFile == NULL) {
        printf("Error: Unable to open the file '%s'\n", argv[1]);
        return 1;
    }

    // Open destination file in write mode
    destinationFile = fopen(argv[2], "w");
    if (sourceFile == NULL) {
        printf("Error: Unable to open the file '%s'\n", argv[2]);
        fclose(sourceFile);
        return 1;
        }

    // Copy contents of source file to destination file character by character
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destinationFile);
    }

    // Close files
    fclose(sourceFile);
    fclose(destinationFile);

    printf("File opened successfully.\n");

    return 0;
}

// DAY 57 Problem
// Write a Program to count number of lowercase, uppercase, digits and special characters present in the contents of a text file.