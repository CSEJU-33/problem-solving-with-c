#include <stdio.h>

int areEqual(int a, int b) {
    return !(a ^ b);
}

int main() {
    int num1 = 5;
    int num2 = 5;
    int result = areEqual(num1, num2);
    printf("Are the numbers equal? %d\n", result);
    return 0;
}