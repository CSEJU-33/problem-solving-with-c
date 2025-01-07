#include <stdio.h>

struct emp {
    int empno;
    char name[20];
    float salary;
};

int main(void) {
    struct emp e[10], temp;
    int i, j, n;
    printf("Enter the number of employees [1-10] \n");
    scanf("%d", &n);
    printf("Enter %d employees' details \n", n);
    for (i = 0; i < n; i++) {
        scanf("%d %s %f", &e[i].empno, e[i].name, &e[i].salary);
    }
    printf("Unsorted list of employees' details \n");
    for (i = 0; i < n; i++) {
        printf("%4d%15s%7.2f\n", e[i].empno, e[i].name, e[i].salary);
    }
    /* sorting begins */
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (e[i].salary > e[j].salary) {
                temp = e[i];
                e[i] = e[j];
                e[j] = temp;
            }
        }
    }
    /* sorting ends */
    printf("Sorted list \n");
    for (i = 0; i < n; i++) {
        printf("%4d%15s%7.2f\n", e[i].empno, e[i].name, e[i].salary);
    }
    return 0;
}
