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
    struct emp e;
    printf("Enter empno, name, doj (day month year) and salary \n");
    scanf("%d %s %d %d %d %f", &e.empno, e.name, &e.doj.day, &e.doj.month, &e.doj.year, &e.salary);

    printf("Empno = %d\n", e.empno);
    printf("Name = %s\n", e.name);
    printf("DOJ = %d/%d/%d\n", e.doj.day, e.doj.month, e.doj.year);
    printf("Salary = %7.2f\n", e.salary);

    return 0;
}
