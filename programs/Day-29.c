// Write a program to check whether the entered number is armstrong or not.

// Armstrong number is a number that is the sum of its own digits each raised to the power of the number of digits.
// example - 
// number = 153
// total digits = 3, sum = (1)^3 + (5)^3 + (3)^3 = 1 + 125 + 27 = 153.
// Therefore, 153 is an armstrong number.

#include <stdio.h>

int main(){
    int num, numCopy, digit, digitTotal, digitPower, armstrong;
    digitTotal = 0;
    armstrong = 0;

    printf("Enter a number : ");
    scanf("%d", &num);
    numCopy = num;

    while(num != 0){
        num = num / 10; // removing last digit one-by-one to find total number of digits 
        digitTotal += 1;
    }
    num = numCopy;
    
    for(int i = 0; i < digitTotal; i++){
        digit = numCopy % 10; // remainder contains the last digit
        digitPower = 1;
        for(int j = 0; j < digitTotal; j++){ // calculating power of each digit
            digitPower = digitPower * digit;
        }
        numCopy = numCopy / 10;
        armstrong += digitPower;
    }

    if(num == armstrong){ // checking if the given number is an armstrong number or not
        printf("%d is an armstrong number.", num);
    } else{
        printf("%d is not an armstrong number.", num);
    }
    
    return 0;
}

// DAY-30 Problem
// Write a Program to read array elements and print them with addresses.