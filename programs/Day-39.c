// Write a Program to reverse a string using user defined function.

#include <stdio.h>
#include <string.h>

// Function to reverse a string
void reverseString(char *str){
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

int main(){
    char str[100];

    printf("Enter the string: ");
    scanf("%[^\n]",&str);

    reverseString(str);

    printf("Reversed string: %s\n", str);
    
    return 0;
}

// DAY-40 Problem
// Write a Program to copy a string using user defined function.