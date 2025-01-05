#include <stdio.h>

int main() {
    int num;
    int count_ones = 0, count_zeros = 0;
    
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    for (int i = 0; i < 32; i++) {
        if (num & (1 << i)) {
            count_ones++;
        } else {
            count_zeros++;
        }
    }
    
    printf("Number of 1's: %d\n", count_ones);
    printf("Number of 0's: %d\n", count_zeros);
    
    return 0;
}