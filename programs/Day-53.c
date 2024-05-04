// Write a Program to open a file, write some content and close it.

#include <stdio.h>

int main() {
    FILE *filePointer; // File pointer
    char content[] = "Hello World!\nThis is a test file."; // Content to write

    // Open file in write mode
    filePointer = fopen("text.txt", "w");

    // Check if file opened successfully
    if (filePointer == NULL) {
        printf("Unable to open the file.\n");
        return 1; // Return error code
    }

    // Write content to a file
    fprintf(filePointer, "%s", content);

    // Close file
    fclose(filePointer);

    printf("The content has been written successfully");

    return 0; // Return success code
}

// DAY 54 Problem
// Write a Program to open a file, read its content and close it.