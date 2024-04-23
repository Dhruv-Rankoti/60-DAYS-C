// Write a Program to concatenate two strings using user defined function.

#include <stdio.h>
#include <string.h>

// Function to concatenate two strings
void stringConcatenate(char str1[], char str2[], char str3[]){
    int i = 0, j = 0;
    // concatenates first string
    while (str1[i] != '\0') {
        str3[i] = str1[i];
        i++;
    }
    // concatenates second string
    while (str2[j] != '\0') {
        str3[i + j] = str2[j];
        j++;
    }
    // Null-terminate the result string
    str3[i + j] = '\0';
}

int main(){
    char str1[100], str2[100];
    char str3[200];
    printf("Enter string 1: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; // Remove the newline character if present

    printf("Enter string 2: ");
    fgets(str2, sizeof(str2), stdin);
    str1[strcspn(str1, "\n")] = '\0'; // Remove the newline character if present

    printf("%s", str1);
    printf("%s", str2);


    stringConcatenate(str1, str2, str3);

    printf("Concatenated string: %s", str3);

    return 0;
}

// DAY-43 Problem
// Write a Program to check whether the entered string is Palindrome or not using user defined function.