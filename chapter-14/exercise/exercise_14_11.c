#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 100

typedef struct {
    int id;
    char name[MAX_NAME_LENGTH];
    float salary;
} Employee;

void createDummyFile(const char *fileName, Employee *employees, int count) {
    FILE *fp = fopen(fileName, "wb");
    if (fp == NULL) {
        perror("Error creating dummy file");
        exit(EXIT_FAILURE);
    }
    fwrite(employees, sizeof(Employee), count, fp);
    fclose(fp);
}

void mergeFiles(const char *file1, const char *file2, const char *outputFile) {
    FILE *fp1 = fopen(file1, "rb");
    FILE *fp2 = fopen(file2, "rb");
    FILE *fpOut = fopen(outputFile, "wb");

    if (fp1 == NULL || fp2 == NULL || fpOut == NULL) {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }

    Employee emp1, emp2;
    int read1 = fread(&emp1, sizeof(Employee), 1, fp1);
    int read2 = fread(&emp2, sizeof(Employee), 1, fp2);

    while (read1 && read2) {
        if (emp1.id < emp2.id) {
            read1 = fread(&emp1, sizeof(Employee), 1, fp1);
        } else if (emp1.id > emp2.id) {
            read2 = fread(&emp2, sizeof(Employee), 1, fp2);
        } else {
            fwrite(&emp1, sizeof(Employee), 1, fpOut);
            read1 = fread(&emp1, sizeof(Employee), 1, fp1);
            read2 = fread(&emp2, sizeof(Employee), 1, fp2);
        }
    }

    fclose(fp1);
    fclose(fp2);
    fclose(fpOut);
}

void printFileContents(const char *fileName) {
    FILE *fp = fopen(fileName, "rb");
    if (fp == NULL) {
        perror("Error opening file to print contents");
        return;
    }
    Employee emp;
    while (fread(&emp, sizeof(Employee), 1, fp)) {
        printf("ID: %d, Name: %s, Salary: %.2f\n", emp.id, emp.name, emp.salary);
    }
    fclose(fp);
}

int main() {
    Employee emp1[] = {{1, "Alice", 5000.0}, {3, "Charlie", 7000.0}};
    Employee emp2[] = {{2, "Bob", 6000.0}, {3, "Charlie", 7000.0}};
    createDummyFile("emp1.dat", emp1, 2);
    createDummyFile("emp2.dat", emp2, 2);

    mergeFiles("emp1.dat", "emp2.dat", "newemp.dat");
    printf("Files merged successfully into newemp.dat\n");
    printFileContents("newemp.dat");
    return 0;
}