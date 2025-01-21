#include <stdio.h>

struct emp {
    int empno;
    char name[20];
    float salary;
};

int main(void) {
    struct emp e;
    FILE *fp;
    int i, n;

    printf("Contents of the file emp.dat \n");
    fp = fopen("emp.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    while (fread(&e, sizeof(e), 1, fp)) {
        printf("%d %s %f\n", e.empno, e.name, e.salary);
    }

    fclose(fp);
    return 0;
}