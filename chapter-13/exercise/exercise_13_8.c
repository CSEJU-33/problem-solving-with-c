#include <stdio.h>
#include <string.h>

void convert_to_words(int n, char *result);

int main() {
    int amount;
    char result[500] = "";

    printf("Enter an amount: ");
    scanf("%d", &amount);

    convert_to_words(amount, result);
    printf("Amount in words: %s Only\n", result);

    return 0;
}

void convert_to_words(int n, char *result) {
    char *single_digits[] = { "Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine" };
    char *two_digits[] = { "", "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen" };
    char *tens_multiple[] = { "", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety" };
    char *tens_power[] = { "Hundred", "Thousand" };

    if (n == 0) {
        strcat(result, "zero");
        return;
    }

    if (n / 1000 > 0) {
        strcat(result, single_digits[n / 1000]);
        strcat(result, " ");
        strcat(result, tens_power[1]);
        strcat(result, " ");
        n %= 1000;
    }

    if (n / 100 > 0) {
        strcat(result, single_digits[n / 100]);
        strcat(result, " ");
        strcat(result, tens_power[0]);
        strcat(result, " ");
        n %= 100;
    }

    if (n > 0) {
        if (n < 10) {
            strcat(result, single_digits[n]);
        } else if (n < 20) {
            strcat(result, two_digits[n - 10]);
        } else {
            strcat(result, tens_multiple[n / 10]);
            if (n % 10 > 0) {
                strcat(result, " ");
                strcat(result, single_digits[n % 10]);
            }
        }
    }
}