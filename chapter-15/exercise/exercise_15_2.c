#include <stdio.h>

#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MIN_OF_THREE(a, b, c) (MIN(MIN((a), (b)), (c)))

int main() {
    int num1, num2, num3, smallest;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    smallest = MIN_OF_THREE(num1, num2, num3);

    printf("The smallest number is: %d\n", smallest);

    return 0;
}