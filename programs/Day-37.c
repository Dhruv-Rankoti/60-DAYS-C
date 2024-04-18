// Write a Program to use library string functions.

#include <stdio.h>
#include <string.h>

int main(){
    // strlen() - calculates the length of a string
    char str1[] = "Hello World!";
    printf("Length of '%s' is : %lu\n", str1, strlen(str1));

    // strcpy() - copies a string
    char str2[20];
    strcpy(str2, str1);
    printf("Copied string : %s\n", str2);

    // strcat() - concatenates two strings
    char str3[50] = "Concatenated:";
    strcat(str3, str1);
    printf("%s\n", str3);

    // strcmp() - compares two strings
    char str4[] = "hello";
    char str5[] = "hello";
    if (strcmp(str4, str5) == 0) {
        printf("%s and %s are equal.\n", str4, str5);
    } else{
        printf("%s and %s are not equal.\n", str4, str5);
    }

    // strchr() - finds the first occurence of a character in a string
    char *ptr = strchr(str1, 'o');
    if (ptr != NULL){
        printf("Found 'o' at index: %ld\n", ptr - str1);
    } else {
        printf("Character not found.\n");
    }

    // strrev() - reverses a string
    char str6[] = "Reverse";
    printf("Original string: %s\n", str6);
    printf("Reversed string: %s", strrev(str6));

    return 0;
}

// DAY-38 Problem
// Write a Program to find length of a string without using user defined function.