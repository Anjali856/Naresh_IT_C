In many organizational systems, managing employee data is a fundamental task. Write a program that captures the profile of an employee, including their full name, a unique identification number (ID), their job designation, and their monthly salary. After collecting the data, the program should display a formatted summary of the employee's profile.

The input consists of four lines:

Name: A string representing the employee's name (may contain spaces).

Employee ID: An integer representing the unique ID.

Designation: A string representing the job title.

Salary: A floating-point number representing the salary.
Examples
Example 1:

Input

rohit,101,development,25000
Output

Employee Details
Name: rohit
Employee ID: 101
Designation: development
Salary: $25000.00
Example 2:

Input

Alice,202,Manager,50000
Output

Employee Details
Name: Alice
Employee ID: 202
Designation: Manager
Salary: $50000.00
  Solution-:
  #include <stdio.h>

int main() {
    char name[100];
    char designation[100];
    int id;
    float salary;

    scanf(" %[^\n]", name);
    scanf("%d", &id);
    scanf(" %[^\n]", designation);
    scanf("%f", &salary);

    printf("Employee Details\n");
    printf("Name: %s\n", name);
    printf("Employee ID: %d\n", id);
    printf("Designation: %s\n", designation);
    printf("Salary: $%.2f\n", salary);

    return 0;
}
