#include <stdio.h>
#include <string.h>

struct emp {
    int empno;
    char name[20];
    float salary;
};

int main(void) {
    struct emp e[10];
    int i, n, flag;
    char sname[20];

    printf("Enter the number of employees \n");
    scanf("%d", &n);

    printf("Enter %d employees' details \n", n);
    for (i = 0; i < n; i++) {
        scanf("%d %s %f", &e[i].empno, e[i].name, &e[i].salary);
    }

    printf("Enter the name of the employee to be searched \n");
    scanf("%s", sname);

    printf("%d employees' details \n", n);
    for (i = 0; i < n; i++) {
        printf("\n%5d%10s%10.2f \n", e[i].empno, e[i].name, e[i].salary);
    }

    printf("\nThe name of the employee to be searched: %s\n", sname);

    /* Searching begins */
    flag = 0;
    for (i = 0; i < n; i++) {
        if (strcmp(e[i].name, sname) == 0) {
            flag = 1;
            break;
        }
    }
    /* Searching ends */

    if (flag == 1) {
        printf("Found\n");
    } else {
        printf("Not found\n");
    }

    return 0;
}
