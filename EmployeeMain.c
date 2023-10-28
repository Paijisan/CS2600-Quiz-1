// employeeMain.c

#include <stdio.h>
#include <stdlib.h>
#include "employee.h"

extern Employee EmployeeTable[];
extern const int EmployeeTableEntries;

int main(void) {
    PtrToEmployee matchPtr;

    matchPtr = searchEmployeeByNumber(EmployeeTable, EmployeeTableEntries, 1045);

    if (matchPtr != NULL)
        printf("Employee ID 1045 is in record %d\n", matchPtr - EmployeeTable);
    else
        printf("Employee ID is NOT found in the record\n");

    matchPtr = searchEmployeeByName(EmployeeTable, EmployeeTableEntries, "Dante");
    if (matchPtr != NULL)
        printf("Employee Tony Bobcat is in record %d\n", matchPtr - EmployeeTable);
    else
        printf("Employee Tony Bobcat is NOT found in the record\n");

    matchPtr = searchEmployeeByPhoneNumber(EmployeeTable, EmployeeTableEntries, "310-667-9956");
    if (matchPtr != NULL)
        printf("Employee with phone number 310-555-1215 is in the record %d\n", matchPtr - EmployeeTable);
    else
        printf("Employee with phone number 310-555-1215 is NOT in the record\n");

    matchPtr = searchEmployeeBySalary(EmployeeTable, EmployeeTableEntries, 6.77);
    if (matchPtr != NULL)
        printf("Employee with a salary of 8.32 is in the record %d\n", matchPtr - EmployeeTable);
    else
        printf("Employee with a salary of 8.32 is NOT in the record\n");

    return EXIT_SUCCESS;
}

