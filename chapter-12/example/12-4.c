#include <stdio.h>

struct emp {
    int empno;
    char name[20];
    float salary;
};

int main(void) {
    struct emp e[10];
    int i, n;

    printf("Enter the number of employees [1-10] \n");
    scanf("%d", &n);

    printf("\nEnter %d employees' details \n", n);
    for (i = 0; i < n; i++) {
        scanf("%d %s %f", &e[i].empno, e[i].name, &e[i].salary);
    }

    printf("\nEmployees' details \n");
    for (i = 0; i < n; i++) {
        printf("\n%4d%15s%7.2f \n", e[i].empno, e[i].name, e[i].salary);
    }

    return 0;
}