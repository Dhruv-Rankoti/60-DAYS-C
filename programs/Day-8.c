// Write a program to check whether entered character is vowel, consonant or number.

#include <stdio.h>
#include <ctype.h>

void main(){
    char ch;
    printf("Enter any character : ");
    scanf("%c", &ch);
    if (isalpha(ch) != 0){
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
            printf("%c is a vowel.", ch);
        } else{
            printf("%c is a consonant.", ch);
        }
    } else if (ch>='0' && ch<='9'){
        printf("%c is a number.", ch);
    } else{
        printf("%c is neither an alphabet nor a number.", ch);
    }
}

// DAY-9 Problem
// Write a Program to display the characters for the ASCII value and vice versa.