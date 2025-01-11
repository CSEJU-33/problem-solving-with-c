#include <stdio.h>

struct emp {
    int empno;
    char name[20];
    float salary;
};

int main(void) {
    int i, n;
    struct emp e;
    FILE *fp;

    fp = fopen("emp.dat", "ab");


    printf("Enter the number of employees to be appended \n");
    scanf("%d", &n);
    printf("Enter empno, name and salary of %d employees \n", n);

    for (i = 1; i <= n; i++) {
        scanf("%d%s%f", &e.empno, e.name, &e.salary);
        fwrite(&e, sizeof(e), 1, fp);
    }

    fclose(fp);
    return 0;
}