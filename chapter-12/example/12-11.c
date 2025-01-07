#include <stdio.h>

struct student {
    int reg_no;
    char name[20];
    float percent;
};

void display(int reg_no, char name[], float percent);

int main(void) {
    struct student s;
    printf("Enter reg_no, name and percent \n");
    scanf("%d %s %f", &s.reg_no, s.name, &s.percent);
    display(s.reg_no, s.name, s.percent);
    return 0;
}

void display(int reg_no, char name[], float percent) {
    printf("%6d%15s%6.2f\n", reg_no, name, percent);
}