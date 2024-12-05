// Question: Write a program to convert a hexadecimal number into its binary equivalent. Sample Solution by Rkn

// Concept I use: Just need to convert each hexadecimal digit into its 4-bit binary equivalent. So, I have used a 2D array to store the binary equivalent of each hexadecimal digit (0-F) and printed them accordingly.

#include <stdio.h>
#include <string.h>

int main()
{
    char hex[100];
    char bin_digits[16][5] = {
        "0000", "0001", "0010", "0011",
        "0100", "0101", "0110", "0111",
        "1000", "1001", "1010", "1011",
        "1100", "1101", "1110", "1111"};
    printf("Enter a hexadecimal number: ");
    scanf("%s", hex);

    printf("Binary equivalent is: ");

    int len = strlen(hex);
    for (int i = 0; i < len; i++)
    {
        if (hex[i] >= '0' && hex[i] <= '9')
        {
            printf("%s", bin_digits[hex[i] - '0']); // Using ASCII value logic, like the previous exercises
        }
        else if (hex[i] >= 'A' && hex[i] <= 'F')
        {
            printf("%s", bin_digits[hex[i] - 'A' + 10]); // Same as above
        }
        else if (hex[i] == '.') // Added this to print the decimal point as it is
        {
            printf(".");
        }
    }

    return 0;
}
