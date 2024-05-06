// An array of record contains information of managers and workers of a company. Write a Program to print all the data of workers and managers in a separate file.

#include <stdio.h>
#include <string.h>

struct Employee {
    char name[25];
    int employeeID;
    char designation[50];
};

int main() {
    // Create an array of records containing information of managers and workers
    struct Employee employees[] = {
        {"John", 1001, "Manager"},
        {"Alice", 1002, "Worker"},
        {"Bob", 1003, "Manager"},
        {"Emma", 1004, "Worker"}
    };
    // Open file for managers and workers
    FILE *managerFile = fopen("managers.txt", "w");
    FILE *workerFile = fopen("workers.txt", "w");

    // Check if file opened successfully
    if (managerFile == NULL || workerFile == NULL) {
        printf("Error: Unable to open files.\n");
        return 1;
    }

    for (int i = 0; i < sizeof(employees) / sizeof(employees[0]); i++) {
        if (strcmp(employees[i].designation, "Manager") == 0) {
            fprintf(managerFile, "Name: %s, Employee ID: %d\n", employees[i].name, employees[i].employeeID);
        } else if (strcmp(employees[i].designation, "Worker") == 0) {
            fprintf(workerFile, "Name: %s, Employee ID: %d\n", employees[i].name, employees[i].employeeID);
        }
    }

    // Close files
    fclose(managerFile);
    fclose(workerFile);
    
    printf("Data written to the files successfully.\n");

    return 0;
}

// DAY 56 Problem
// Write a Program to copy one file to another using command line arguments.