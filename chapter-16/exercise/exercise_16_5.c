#include <stdio.h>

unsigned int rotate_right(unsigned int value, unsigned int n) {
    unsigned int num_bits = sizeof(value) * 8; // Number of bits in an unsigned int
    n = n % num_bits; // Ensure n is within the range of the number of bits
    return (value >> n) | (value << (num_bits - n));
}

void print_binary(unsigned int value) {
    unsigned int num_bits = sizeof(value) * 8;
    for (int i = num_bits - 1; i >= 0; i--) {
        printf("%u", (value >> i) & 1);
    }
    printf("\n");
}

int main() {
    unsigned int value = 0b1010100111001101;
    unsigned int n = 4;
    unsigned int result = rotate_right(value, n);
    printf("Original: %u\n", value);
    printf("Original (binary): ");
    print_binary(value);
    printf("Rotated: %u\n", result);
    printf("Rotated (binary): ");
    print_binary(result);
    return 0;
}