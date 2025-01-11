#include <stdio.h>

struct emp {
    int empno;
    char name[20];
    float salary;
};

int main(void) {
    FILE *fp;
    struct emp e;
    int i, n;

    fp = fopen("emp.dat", "w");

    printf("Enter number of employees \n");
    scanf("%d", &n);
    printf("Enter %d Employees' Details \n", n);

    for (i = 1; i <= n; i++) {
        scanf("%d%s%f", &e.empno, e.name, &e.salary);
        fprintf(fp, "%d %s %f\n", e.empno, e.name, e.salary);
    }

    fclose(fp);
    return 0;
}