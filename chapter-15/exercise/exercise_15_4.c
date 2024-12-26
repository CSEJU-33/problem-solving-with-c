#include <stdio.h>

#define SI(p, t, r) ((p) * (t) * (r) / 100.0)

int main() {
    double p1 = 1000, t1 = 2, r1 = 5;
    double p2 = 1500, t2 = 3, r2 = 4;

    double si1 = SI(p1, t1, r1);
    double si2 = SI(p2, t2, r2);

    printf("Simple Interest for first set (p=%.2f, t=%.2f, r=%.2f): %.2f\n", p1, t1, r1, si1);
    printf("Simple Interest for second set (p=%.2f, t=%.2f, r=%.2f): %.2f\n", p2, t2, r2, si2);

    return 0;
}