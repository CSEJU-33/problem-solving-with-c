#include <stdio.h>

long long factorial(int num) {
    long long fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

long long calculate_n_r(int n, int r) {
    return factorial(n) / factorial(n - r);
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
        printf("The value of n = %lld\n", calculate_n_r(n, r));
    }

    return 0;
}