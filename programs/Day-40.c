// Write a Program to copy a string using user defined function.

#include <stdio.h>

// Function to copy a string
void strCopy(char originalString[], char copiedString[]){
    int i = 0;
    while (originalString[i] != '\0') {
        copiedString[i] = originalString[i];
        i++;
    }
    // Add null terminator to the end of copied string
    copiedString[i] = '\0';
}

int main(){
    char originalString[100];
    char copiedString[100];

    printf("Enter a string: ");
    scanf("%[^\n]", originalString);

    strCopy(originalString, copiedString);

    printf("Copied string: %s\n", copiedString);

    return 0;
}

// DAY-41 Problem
// Write a Program to count number of words in a string using user defined function.