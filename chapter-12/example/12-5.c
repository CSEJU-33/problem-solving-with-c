#include <stdio.h>

struct emp {
    int empno;
    char name[20];
    float salary;
};

int main(void) {
    struct emp e[2] = {{121, "Nishu", 2345}, {122, "Harshith", 23498}};
    int i;

    printf("Employee details\n");
    for (i = 0; i < 2; i++) {
        printf("%6d%20s%8.2f\n", e[i].empno, e[i].name, e[i].salary);
    }

    return 0;
}