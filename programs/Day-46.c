// Write a recursive Program for Towers of Hanoi Problem.

#include <stdio.h>

// Function to solve the Tower of Hanoi problem
void towerOfHanoi(int n, char sourceRod, char destRod, char auxRod) {
    if (n == 1) {
        printf("Move Disk %d from Rod %c to Rod %c\n", n, sourceRod, destRod);
        return;
    }
    
    towerOfHanoi(n-1, sourceRod, auxRod, destRod);
    printf("Move Disk %d from Rod %c to Rod %c\n", n, sourceRod, destRod);
    towerOfHanoi(n-1, auxRod, destRod, sourceRod);
}

int main() {
    int n;
    printf("Enter number of disks: ");
    scanf("%d", &n);

    towerOfHanoi(n, 'A', 'B', 'C');

    return 0;
}

// DAY 47 Problem
// Write a Program to increment/decrement a pointer.