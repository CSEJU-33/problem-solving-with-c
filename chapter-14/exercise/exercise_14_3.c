#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 100
#define MAX_STUDENTS 100

void sortNames(char names[][MAX_NAME_LENGTH], int n) {
    char temp[MAX_NAME_LENGTH];
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }
}

int main() {
    FILE *file;
    char names[MAX_STUDENTS][MAX_NAME_LENGTH];
    int count = 0;

    file = fopen("students.txt", "r");
    if (file == NULL) {
        printf("Could not open file\n");
        return 1;
    }

    while (fgets(names[count], MAX_NAME_LENGTH, file) != NULL) {
        // Remove newline character if present
        names[count][strcspn(names[count], "\n")] = '\0';
        count++;
    }
    fclose(file);

    sortNames(names, count);

    printf("Sorted list of students:\n");
    for (int i = 0; i < count; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}