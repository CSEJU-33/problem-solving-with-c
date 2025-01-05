#include <stdio.h>
#include <string.h>

void twos_complement(char *binary_str) {
    int len = strlen(binary_str);
    int complement_started = 0;

    for (int i = len - 1; i >= 0; i--) {
        if (complement_started) {
            binary_str[i] = (binary_str[i] == '1') ? '0' : '1';
        } else if (binary_str[i] == '1') {
            complement_started = 1;
        }
    }
}

int main() {
    char binary_number[] = "1001";
    twos_complement(binary_number);
    printf("2's complement of 1001 is %s\n", binary_number);
    return 0;
}