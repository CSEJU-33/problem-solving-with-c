#include <stdio.h>
#include <process.h>

struct emp {
    int eno;
    char name[20];
    float salary;
};

int main(void) {
    FILE *fp;
    int position, recno;
    struct emp e;

    fp = fopen("emp.dat", "rb+");
    if (fp == NULL) {
        printf("emp.dat cannot be opened\n");
        exit(0);
    }

    printf("Enter recno of the record to be updated \n");
    scanf("%d", &recno);

    fseek(fp, (recno - 1) * sizeof(e), SEEK_SET);
    printf("Enter new details of the employee \n");
    scanf("%d%s%f", &e.eno, e.name, &e.salary);

    fwrite(&e, sizeof(e), 1, fp);
    fclose(fp);

    return 0;
}