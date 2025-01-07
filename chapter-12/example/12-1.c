#include <stdio.h>

struct emp {
    int empno;
    char name[20];
    float salary;
};

int main(void) {
    struct emp e;
    printf("Enter empno, name and salary of the employee \n");
    scanf("%d %s %f", &e.empno, e.name, &e.salary);
    printf("Details of the employee \n");
    printf("%6d%15s%8.2f\n", e.empno, e.name, e.salary);
    return 0;
}
