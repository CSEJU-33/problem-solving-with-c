#include <stdio.h>

struct emp {
    int empno;
    char name[20];
    float salary;
};

int main(void) {
    struct emp e1 = {123, "Harshith", 23456};
    struct emp e2 = {124};
    struct emp e3;

    printf("Details of the employee e1 \n");
    printf("%6d%15s%8.2f\n", e1.empno, e1.name, e1.salary);

    printf("Details of the employee e2 \n");
    printf("%6d%15s%8.2f\n", e2.empno, e2.name, e2.salary);

    printf("Details of the employee e3 \n");
    printf("%6d%15s%8.2f\n", e3.empno, e3.name, e3.salary);

    return 0;
}
