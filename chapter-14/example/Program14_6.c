#include <stdio.h>

struct emp {
    int empno;
    char name[20];
    float salary;
};

int main(void) {
    FILE *fp;
    struct emp e;

    fp = fopen("emp.dat", "r");
    

    while (!feof(fp)) {
        fscanf(fp, "%d%s%f", &e.empno, e.name, &e.salary);
        printf("%6d%15s%7.2f\n", e.empno, e.name, e.salary);
    }

    fclose(fp);
    return 0;
}