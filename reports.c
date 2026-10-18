#include <stdio.h>
#include "reports.h"

float calculateTotalSalary(struct Employee e) {
    return e.basicSalary + e.allowance;
}

void displayEmployeeReport(struct Employee emps[], int empCount) {
    if (empCount == 0) {
        printf("\n===== EMPLOYEE REPORT =====\n");
        printf("Total Employees: 0\n");
        printf("Average Salary: N$0.00\n");
        printf("No employee data available.\n");
        return;
    }

    float total = 0;
    float max = calculateTotalSalary(emps[0]);
    float min = calculateTotalSalary(emps[0]);

    for (int i = 0; i < empCount; i++) {
        float s = calculateTotalSalary(emps[i]);
        total += s;
        if (s > max) max = s;
        if (s < min) min = s;
    }

    printf("\n===== EMPLOYEE REPORT =====\n");
    printf("Total Employees: %d\n", empCount);
    printf("Average Salary: N$%.2f\n", total / empCount);
    printf("Highest Salary: N$%.2f\n", max);
    printf("Lowest Salary: N$%.2f\n", min);
}
