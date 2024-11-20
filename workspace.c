// struct

#include <stdio.h>
#include <string.h>

// Define a structure for employee information
struct EmployeeInfo
{
    int Age;
    float Salary;
    char Name[30];
    char Gender[8];
};

int main(){
    // Initialize first employee data
    struct EmployeeInfo Employee1;
    strcpy(Employee1.Name, "Ahmet");
    strcpy(Employee1.Gender, "Male");
    Employee1.Age = 34;
    Employee1.Salary = 8500;

    // Print first employee details
    printf("Employee Name: %s\n", Employee1.Name);
    printf("Employee Gender: %s\n", Employee1.Gender);
    printf("Employee Age: %d\n", Employee1.Age);
    printf("Employee Salary: %lf\n", Employee1.Salary);

    printf("\n..........\n");

    // Initialize second employee data using direct initialization
    struct EmployeeInfo Employee2 = {33, 8800, "Ela", "Female"};

    // Print first employee details
    printf("Employee Name: %s\n", Employee2.Name);
    printf("Employee Gender: %s\n", Employee2.Gender);
    printf("Employee Age: %d\n", Employee2.Age);
    printf("Employee Salary: %lf\n", Employee2.Salary);

    printf("\n..........\n");

    // Copy second employee data into a new structure
    struct EmployeeInfo Employee2Copy;
    Employee2Copy = Employee2;

    // Print copied employee details
    printf("Employee Name: %s\n", Employee2Copy.Name);
    printf("Employee Gender: %s\n", Employee2Copy.Gender);
    printf("Employee Age: %d\n", Employee2Copy.Age);
    printf("Employee Salary: %lf\n", Employee2Copy.Salary);


    return 0;
}