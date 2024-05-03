// Write a Program to store information of n students using structures.

#include <stdio.h>
#include <string.h>

// Define structure to store student information
struct students {
    char name[25];
    int rno;
    float marks;
} s[100]; // Array of structures to store information for multiple students

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    getchar(); // consume newline character left by scanf

    // Input information for each student
    for (int i = 0; i < n; i++) {
        printf("\nEnter the details for Student %d\n", i + 1);

        // Input student name
        printf("Name: ");
        fgets(s[i].name, sizeof(s[i].name), stdin);
        s[i].name[strcspn(s[i].name, "\n")] = '\0'; // remove trailing newline

        // Input student roll number
        printf("Roll Number: ");
        scanf("%d", &s[i].rno);

        // Input student marks
        printf("Marks: ");
        scanf("%f", &s[i].marks);
        getchar(); // consume newline character left by scanf
    }

    // Display information for all students
    printf("\nInformation of all students:\n");
    for (int i = 0; i < n; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", s[i].name);
        printf("Roll Number: %d\n", s[i].rno);
        printf("Marks: %.2f\n", s[i].marks);
        printf("\n");
    }

    return 0;
}

// DAY 53 Problem
// Write a Program to open a file, write some content and close it.