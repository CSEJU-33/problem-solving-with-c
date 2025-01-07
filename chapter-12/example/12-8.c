#include <stdio.h>

struct student {
    int reg_no;
    char name[20];
    int marks[5];
    int total;
    float percent;
};

int main(void) {
    struct student s[10];
    int i, n, j;
    printf("Enter the number of students \n");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Enter reg no, name of student-%d \n", i + 1);
        scanf("%d %s", &s[i].reg_no, s[i].name);
        printf("Enter marks in five subjects of %s \n", s[i].name);
        for (j = 0; j < 5; j++) {
            scanf("%d", &s[i].marks[j]);
        }
        /* Finding the total and percentage begins */
        s[i].total = 0;
        for (j = 0; j < 5; j++) {
            s[i].total += s[i].marks[j];
        }
        s[i].percent = (float)s[i].total / 5;
    }

    printf("\nReg-No           Name     Percentage\n");
    for (i = 0; i < n; i++) {
        printf("%6d%15s%10.2f\n", s[i].reg_no, s[i].name, s[i].percent);
    }
    return 0;
}
