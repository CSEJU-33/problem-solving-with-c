#include <stdio.h>
#include <string.h>

void format_with_commas(char *dest, const char *src) {
    int len = strlen(src);
    int commas = (len - 1) / 3; // Number of commas for standard grouping
    int dest_len = len + commas;
    dest[dest_len] = '\0'; // Null-terminate the destination string

    int src_index = len - 1;      // Start from the end of the source string
    int dest_index = dest_len - 1; // Start from the end of the destination string
    int count = 0;

    int flag = 0;
    while (src_index >= 0) {
        dest[dest_index--] = src[src_index--]; // Copy digit
        count++;

        // Insert a comma after every 3 digits, except at the start
        if (count == 2 && src_index >= 0) {
            dest[dest_index--] = ',';
            count = 0;
        }
    }
}

int main() {
    char amount[100];
    char amount_except_last_digit[99];
    char formatted_amount[110]; // Extra space for commas

    printf("Enter an amount: ");
    scanf("%s", amount);

    char last_digit = amount[strlen(amount) - 1];
    strncpy(amount_except_last_digit, amount, strlen(amount) - 1);

    format_with_commas(formatted_amount, amount_except_last_digit);
    strcat(formatted_amount, &last_digit);

    printf("Formatted amount: %s\n", formatted_amount);

    return 0;
}
