#include <stdio.h>

#define RECT(length, breadth) ((length) * (breadth))

int main() {
    double length, breadth, area;

    // Input length and breadth
    printf("Enter the length of the rectangle: ");
    scanf("%lf", &length);
    printf("Enter the breadth of the rectangle: ");
    scanf("%lf", &breadth);

    // Calculate area using the RECT macro
    area = RECT(length, breadth);

    // Output the area
    printf("The area of the rectangle is: %.2lf\n", area);

    return 0;
}