#include <stdio.h>

struct emp {
    int empno;
    char name[20];
    float salary;
};

void display(struct emp e[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%6d%15s%8.2f\n", e[i].empno, e[i].name, e[i].salary);
    }
}

int main(void) {
    struct emp e[10];
    int i, n;

    printf("Enter the number of employees\n");
    scanf("%d", &n);

    printf("Enter %d employees' details\n", n);
    for (i = 0; i < n; i++) {
        printf("Enter employee number, name, and salary for employee %d\n", i + 1);
        scanf("%d %s %f", &e[i].empno, e[i].name, &e[i].salary);
    }

    display(e, n);

    return 0;
}
