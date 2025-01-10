#include <stdio.h>

union utemp {
    int i;
    float f;
    double d;
};

struct stemp {
    char name[20];
    int type;
    union utemp u;
};

int main(void) {
    struct stemp s[3];
    int i, t;

    for (i = 0; i < 3; i++) {
        printf("Enter type [1 for int, 2 for float, 3 for double]\n");
        scanf("%d", &t);
        s[i].type = t;

        printf("Enter name\n");
        scanf("%s", s[i].name);

        if (t == 1) {
            printf("Enter an integer value\n");
            scanf("%d", &s[i].u.i);
        } else if (t == 2) {
            printf("Enter a float value\n");
            scanf("%f", &s[i].u.f);
        } else {
            printf("Enter a double value\n");
            scanf("%lf", &s[i].u.d);
        }
    }

    for (i = 0; i < 3; i++) {
        printf("Name: %s\n", s[i].name);
        if (s[i].type == 1) {
            printf("Integer: %d\n", s[i].u.i);
        } else if (s[i].type == 2) {
            printf("Float: %f\n", s[i].u.f);
        } else {
            printf("Double: %lf\n", s[i].u.d);
        }
        printf("\n");
    }

    return 0;
}
