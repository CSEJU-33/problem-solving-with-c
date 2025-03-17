#include <stdio.h>

double f(double x) {
    return x * x; // f(x) = x^2 is a example function
}

double simpsonsRule(double a, double b, int n) {
    if (n % 2 != 0) {
        printf("Number of strips must be even.\n");
        return -1;
    }

    double h = (b - a) / n;
    double sum = f(a) + f(b);

    for (int i = 1; i < n; i++) {
        double x = a + i * h;
        sum += (i % 2 == 0) ? 2 * f(x) : 4 * f(x);
    }

    return (h / 3) * sum;
}

int main() {
    double a, b;
    int n;

    printf("Enter the lower limit of integration (a): ");
    scanf("%lf", &a);
    printf("Enter the upper limit of integration (b): ");
    scanf("%lf", &b);
    printf("Enter the number of strips (n, must be even): ");
    scanf("%d", &n);

    double result = simpsonsRule(a, b, n);
    if (result != -1) {
        printf("The integral is approximately: %lf\n", result);
    }

    return 0;
}