#include <stdio.h>

struct student {
    int reg_no;
    char name[20];
    float percent;
};

void display(struct student *sp);

int main(void) {
    struct student s;
    printf("Enter reg_no, name and percent \n");
    scanf("%d %s %f", &s.reg_no, s.name, &s.percent);
    display(&s);
    return 0;
}

void display(struct student *sp) {
    printf("%6d%15s%6.2f\n", sp->reg_no, sp->name, sp->percent);
}