#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LEN 100
#define MAX_DEPT_NAME_LEN 100

typedef struct {
    int empno;
    char name[MAX_NAME_LEN];
    float salary;
    int deptno;
} Employee;

typedef struct {
    int deptno;
    char deptname[MAX_DEPT_NAME_LEN];
} Department;

void readEmployees(Employee employees[], int *empCount) {
    FILE *file = fopen("emp.dat", "r");
    if (file == NULL) {
        perror("Unable to open emp.dat");
        exit(EXIT_FAILURE);
    }

    *empCount = 0;
    while (fscanf(file, "%d %s %f %d", &employees[*empCount].empno, employees[*empCount].name, &employees[*empCount].salary, &employees[*empCount].deptno) != EOF) {
        (*empCount)++;
    }

    fclose(file);
}

void readDepartments(Department departments[], int *deptCount) {
    FILE *file = fopen("dept.dat", "r");
    if (file == NULL) {
        perror("Unable to open dept.dat");
        exit(EXIT_FAILURE);
    }

    *deptCount = 0;
    while (fscanf(file, "%d %s", &departments[*deptCount].deptno, departments[*deptCount].deptname) != EOF) {
        (*deptCount)++;
    }

    fclose(file);
}

const char* getDeptName(int deptno, Department departments[], int deptCount) {
    for (int i = 0; i < deptCount; i++) {
        if (departments[i].deptno == deptno) {
            return departments[i].deptname;
        }
    }
    return "Unknown";
}

int main() {
    Employee employees[100];
    Department departments[100];
    int empCount, deptCount;

    readEmployees(employees, &empCount);
    readDepartments(departments, &deptCount);

    printf("EmpNo\tName\t\tDeptName\t\tSalary\n");
    printf("-----------------------------------------------------------\n");
    for (int i = 0; i < empCount; i++) {
        printf("%-8d%-16s%-16s%.2f\n", employees[i].empno, employees[i].name, getDeptName(employees[i].deptno, departments, deptCount), employees[i].salary);
    }

    return 0;
}