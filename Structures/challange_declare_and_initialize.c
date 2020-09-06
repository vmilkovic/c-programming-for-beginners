// write a program that declares a structure and prints out it's content
// create an employee structure with 3 members - name (character array), hireDate (char), salary (float)
// declare and initialize an instance of an employee type
// read in a second employee from the console and store it in a structure of type employee
// print out the contents of each employee

#include "stdio.h"
#include "stdlib.h"

struct employee {
    char name[30];
    char hireDate[15];
    float salary;
};

int main(void){

    struct employee employee = {"Mike", "7/16/2020", 76909.00f};

    printf("Name: %s\n", employee.name);
    printf("Hire date: %s\n", employee.hireDate);
    printf("Salary: %f\n", employee.salary);

    printf("Enter employee information: \n");
    printf("Name: \n");
    scanf("%s", employee.name);
    printf("Hire date: \n");
    scanf("%s", employee.hireDate);
    printf("Salary: \n");
    scanf("%f", &employee.salary);

    printf("Name: %s\n", employee.name);
    printf("Hire date: %s\n", employee.hireDate);
    printf("Salary: %f\n", employee.salary);

    return 0;
}