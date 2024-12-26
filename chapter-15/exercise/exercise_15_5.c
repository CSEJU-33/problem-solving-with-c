#include <stdio.h>

#define SWAP(a, b) do { \
    typeof(a) temp = a; \
    a = b; \
    b = temp; \
} while (0)

int main() {
    int x = 5, y = 10;
    printf("Before swap: x = %d, y = %d\n", x, y);
    SWAP(x, y);
    printf("After swap: x = %d, y = %d\n", x, y);

    double p = 1.5, q = 2.5;
    printf("Before swap: p = %.1f, q = %.1f\n", p, q);
    SWAP(p, q);
    printf("After swap: p = %.1f, q = %.1f\n", p, q);

    return 0;
}