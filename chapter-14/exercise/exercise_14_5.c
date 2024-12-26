#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int roll_no;
    char name[50];
    int marks[5];
} Student;

void addRecord(FILE *file) {
    Student student;
    printf("Enter student roll number: ");
    scanf("%d", &student.roll_no);
    printf("Enter student name: ");
    scanf("%s", student.name);
    printf("Enter marks for 5 subjects: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &student.marks[i]);
    }

    fprintf(file, "%d %s %d %d %d %d %d\n", student.roll_no, student.name, student.marks[0], student.marks[1], student.marks[2], student.marks[3], student.marks[4]);
    printf("Record added successfully.\n");
}

void deleteRecord(FILE *file) {
    FILE *temp = fopen("temp.txt", "w");
    if (temp == NULL) {
        printf("Error opening temporary file.\n");
        return;
    }

    int roll_no;
    printf("Enter roll number to delete: ");
    scanf("%d", &roll_no);

    Student student;
    int found = 0;
    rewind(file);
    while (fscanf(file, "%d %s %d %d %d %d %d\n", &student.roll_no, student.name, &student.marks[0], &student.marks[1], &student.marks[2], &student.marks[3], &student.marks[4]) != EOF) {
        if (student.roll_no != roll_no) {
            fprintf(temp, "%d %s %d %d %d %d %d\n", student.roll_no, student.name, student.marks[0], student.marks[1], student.marks[2], student.marks[3], student.marks[4]);
        } else {
            found = 1;
        }
    }

    fclose(file);
    fclose(temp);

    remove("student_db.txt");
    rename("temp.txt", "student_db.txt");

    file = fopen("student_db.txt", "a+");

    if (found) {
        printf("Record deleted successfully.\n");
    } else {
        printf("Record not found.\n");
    }
}

void updateRecord(FILE *file) {
    FILE *temp = fopen("temp.txt", "w");
    if (temp == NULL) {
        printf("Error opening temporary file.\n");
        return;
    }

    int roll_no;
    printf("Enter roll number to update: ");
    scanf("%d", &roll_no);

    Student student;
    int found = 0;
    rewind(file);
    while (fscanf(file, "%d %s %d %d %d %d %d\n", &student.roll_no, student.name, &student.marks[0], &student.marks[1], &student.marks[2], &student.marks[3], &student.marks[4]) != EOF) {
        if (student.roll_no == roll_no) {
            printf("Enter new name: ");
            scanf("%s", student.name);
            printf("Enter new marks for 5 subjects: ");
            for (int i = 0; i < 5; i++) {
                scanf("%d", &student.marks[i]);
            }
            found = 1;
        }
        fprintf(temp, "%d %s %d %d %d %d %d\n", student.roll_no, student.name, student.marks[0], student.marks[1], student.marks[2], student.marks[3], student.marks[4]);
    }

    fclose(file);
    fclose(temp);

    remove("student_db.txt");
    rename("temp.txt", "student_db.txt");

    file = fopen("student_db.txt", "a+");

    if (found) {
        printf("Record updated successfully.\n");
    } else {
        printf("Record not found.\n");
    }
}

void displayRecords(FILE *file) {
    Student student;
    rewind(file);
    printf("\nRoll No\tName\tMarks\n");
    printf("-------------------------------------------------\n");
    while (fscanf(file, "%d %s %d %d %d %d %d\n", &student.roll_no, student.name, &student.marks[0], &student.marks[1], &student.marks[2], &student.marks[3], &student.marks[4]) != EOF) {
        printf("%d\t%s\t%d %d %d %d %d\n", student.roll_no, student.name, student.marks[0], student.marks[1], student.marks[2], student.marks[3], student.marks[4]);
    }
}

int main() {
    FILE *file = fopen("student_db.txt", "a+");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    int choice;
    do {
        printf("\nMenu:\n");
        printf("1. Add Record\n");
        printf("2. Delete Record\n");
        printf("3. Update Record\n");
        printf("4. Display Records\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addRecord(file);
                break;
            case 2:
                deleteRecord(file);
                break;
            case 3:
                updateRecord(file);
                break;
            case 4:
                displayRecords(file);
                break;
            case 5:
                fclose(file);
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}