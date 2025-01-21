#include <stdio.h>
#include <process.h>

struct emp {
    int eno;
    char name[20];
    float salary;
};

int main(void) {
    FILE *fp;
    int recno;
    struct emp e;

    fp = fopen("emp.dat", "rb");
    if (fp == NULL) {
        printf("emp.dat cannot be opened");
        exit(0);
    }

    printf("Enter recno of the record to be read directly \n");
    scanf("%d", &recno);

    fseek(fp, (recno - 1) * sizeof(e), SEEK_SET);
    fread(&e, sizeof(e), 1, fp);

    printf("eno: %d\n", e.eno);
    printf("Name: %s\n", e.name);
    printf("Salary: %8.2f \n", e.salary);

    fclose(fp);
    return 0;
}