#include <stdio.h>

struct date {
    int day, month, year;
};

struct emp {
    int empno;
    char name[20];
    struct date doj;
    float salary;
};

int main(void) {
    struct emp e1 = {123, "Raghav", {12, 4, 1998}, 13450};
    struct emp e2 = {124, "Madhav", {12, 5, 1999}, 23450};

    printf("%6d%-15s%d/%d/%d%10.2f\n", e1.empno, e1.name, e1.doj.day, e1.doj.month, e1.doj.year, e1.salary);
    printf("%6d%-15s%d/%d/%d%10.2f\n", e2.empno, e2.name, e2.doj.day, e2.doj.month, e2.doj.year, e2.salary);

    return 0;
}
