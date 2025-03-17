#include <stdio.h>

long long factorial(int num) {
    long long fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

long long calculate_nc(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int n, r;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the value of r: ");
    scanf("%d", &r);

    if (r > n) {
        printf("Invalid input: r should be less than or equal to n.\n");
    } else {
        printf("The value of nc = %lld\n", calculate_nc(n, r));
    }

    return 0;
}