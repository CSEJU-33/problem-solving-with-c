#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int id;
    char name[50];
    float salary;
} Employee;

void insertEmployee(const char *filename, Employee newEmployee) {
    FILE *file = fopen(filename, "r+");
    if (!file) {
        file = fopen(filename, "w+");
        if (!file) {
            perror("Failed to open file");
            return;
        }
    }

    Employee temp;
    FILE *tempFile = fopen("temp.txt", "w+");
    if (!tempFile) {
        perror("Failed to open temporary file");
        fclose(file);
        return;
    }

    int inserted = 0;
    while (fscanf(file, "%d %49s %f", &temp.id, temp.name, &temp.salary) == 3) {
        if (!inserted && newEmployee.salary < temp.salary) {
            fprintf(tempFile, "%d %s %.2f\n", newEmployee.id, newEmployee.name, newEmployee.salary);
            inserted = 1;
        }
        fprintf(tempFile, "%d %s %.2f\n", temp.id, temp.name, temp.salary);
    }

    if (!inserted) {
        fprintf(tempFile, "%d %s %.2f\n", newEmployee.id, newEmployee.name, newEmployee.salary);
    }

    fclose(file);
    fclose(tempFile);

    remove(filename);
    rename("temp.txt", filename);
}

int main() {
    Employee newEmployee;
    printf("Enter Employee ID: ");
    scanf("%d", &newEmployee.id);
    printf("Enter Employee Name: ");
    scanf("%s", newEmployee.name);
    printf("Enter Employee Salary: ");
    scanf("%f", &newEmployee.salary);

    insertEmployee("employees.txt", newEmployee);

    printf("Employee record inserted successfully.\n");
    return 0;
}