#ifndef REPORTS_H
#define REPORTS_H

struct Employee {
    int id;
    char name[50];
    float basicSalary;
    float allowance;
};

float calculateTotalSalary(struct Employee e);
void displayEmployeeReport(struct Employee emps[], int empCount);

#endif
