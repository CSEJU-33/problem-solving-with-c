#include <stdio.h>

// Function to calculate GCD
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to calculate LCM and GCD
void lcm_gcd(int a, int b, int *l, int *g) {
    *g = gcd(a, b);
    *l = (a * b) / *g;
}

int main() {
    int a, b, l, g;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Function call to calculate LCM and GCD
    lcm_gcd(a, b, &l, &g);

    // Output the results
    printf("LCM of %d and %d is: %d\n", a, b, l);
    printf("GCD of %d and %d is: %d\n", a, b, g);

    return 0;
}