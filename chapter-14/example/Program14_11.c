#include <stdio.h>

struct emp {
    int empno;
    char name[20];
    float salary;
};

int main(void) {
    FILE *fp;
    int nor, last_byte;

    fp = fopen("emp.dat", "r");

    fseek(fp, 0L, SEEK_END);
    last_byte = ftell(fp);
    nor = last_byte / sizeof(struct emp);

    printf("The number of records = %d", nor);

    fclose(fp);
    return 0;
}