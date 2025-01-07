#include <stdio.h>

struct emp {
    int empno;
    char name[20];
    float salary;
};

int main(void) {
    struct emp e1, e2;
    int size;

    printf("Enter empno, name and salary \n");
    scanf("%d %s %f", &e1.empno, e1.name, &e1.salary);

    size = sizeof(e1);
    printf("\nThe number of bytes required for e1 = %d \n\n", size);

    e2 = e1;
    printf("After assigning e1 to e2 \n\n");
    printf("e2.empno = %d\n", e2.empno);
    printf("e2.name = %s\n", e2.name);
    printf("e2.salary = %8.2f\n\n", e2.salary);
    printf("Address of e1 = %p\n", (void*)&e1);

    return 0;
}
