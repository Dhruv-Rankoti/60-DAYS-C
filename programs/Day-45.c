// Write a Program to sort a list of strings into alphabetical order.

#include <stdio.h>
#include <string.h>

int main(){
    char strings[100][100];
    int numStrings;

    printf("Enter the number of strings: ");
    scanf("%d", &numStrings);
    getchar(); // Consume newline character
    
    printf("Enter %d of string:\n", numStrings);
    for (int i = 0; i < numStrings; i++) {
        fgets(strings[i], sizeof(strings[i]), stdin);
        strings[i][strcspn(strings[i], "\n")] = '\0'; // Remove newline character
    }

    // Sort the strings alphabetically using bubble sort
    for (int i = 0; i < numStrings - 1; i++) {
        for (int j = 0; j < numStrings - i - 1; j++) {
            if (strcasecmp(strings[j], strings[j + 1]) > 0) {
                char temp[100];
                strcpy(temp, strings[j]);
                strcpy(strings[j], strings[j + 1]);
                strcpy(strings[j + 1], temp);
            }
        }
    }

    // Output the stored list
    printf("Sorted list of strings:\n");
    for (int i = 0; i < numStrings; i++) {
        printf("%s\n", strings[i]);
    }
    
    return 0;
}

// DAY-46 Problem
// Write a recursive Problem for Towers of Hanoi Problem.