// Compile using the following command: gcc employeeMain.c employeeTable.c employeeOne.c
// or
// gcc employeeMain.c employeeTable.c employeeTwo.c

#include<string.h>
#include<stdlib.h>
#include"employee.h"

int main(void) {
    // Defined in employeeSearchOne.c
    PtrToEmployee searchEmployeeByNumber(const Employee table[], int sizeTable, long numberToFind);
    PtrToEmployee searchEmployeeByName(const Employee table[], int sizeTable, char * nameToFind);
    PtrToEmployee searchEmployeeByPhoneNumber(const Employee table[], int sizeTable, char *phoneNumToFind);
    PtrToEmployee searchEmployeeBySalary(const Employee table[], int sizeTable, double salaryToFind);

    // Defined in employeeTable.c
    extern Employee EmployeeTable[];
    extern const int EmployeeTableEntries;

    PtrToEmployee matchPtr; // Declaration
    matchPtr = searchEmployeeByNumber(EmployeeTable, EmployeeTableEntries, 1045);

    // Example not found
    if (matchPtr != NULL)
        printf("Employee ID 1045 is in record %d\n", matchPtr - EmployeeTable);
    else
        printf("Employee ID is NOT found in the record\n");

    // Example found
    matchPtr = searchEmployeeByName(EmployeeTable, EmployeeTableEntries, "Tony Bobcat");
    if (matchPtr != NULL)
        printf("Employee Tony Bobcat is in record %d\n", matchPtr - EmployeeTable);
    else
        printf("Employee Tony Bobcat is NOT found in the record\n");
    
    matchPtr = searchEmployeeByPhoneNumber(EmployeeTable, EmployeeTableEntries, "310-555-1215");
        if(matchPtr != NULL)
            printf("Employee with number 310-555-1215 is in the record %d\n", matchPtr - EmployeeTable);
        else
            printf("Employee with phone number 310-555-1215 is NOT in the record\n");
    
    matchPtr = searchEmployeeBySalary(EmployeeTable, EmployeeTableEntries, "8.32");
        if(matchPtr != NULL)
            printf("Employee with a salary of 8.32 is in the record %d\n", matchPtr - EmployeeTable);
        else
            printf("Employee with salary of 8.32 is NOT in the record\n");
    
    
    return EXIT_SUCCESS;

    
}
