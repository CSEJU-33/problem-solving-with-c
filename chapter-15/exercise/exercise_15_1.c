#include <stdio.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main() {
    int num1, num2, max;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    max = MAX(num1, num2);

    printf("The maximum of %d and %d is %d\n", num1, num2, max);

    return 0;
}