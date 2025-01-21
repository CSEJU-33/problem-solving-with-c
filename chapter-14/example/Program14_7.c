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

    fp = fopen("emp.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter the number of employees \n");
    scanf("%d", &n);
    printf("Enter empno, name and salary of %d employees \n", n);

    for (i = 1; i <= n; i++) {
        scanf("%d%s%f", &e.empno, e.name, &e.salary);
        fwrite(&e, sizeof(e), 1, fp);
    }

    fclose(fp);
    return 0;
}