// Question: Write a program to convert an hexadecimal integer number into its decimal number equivalent. Sample Solution by Rkn

// Concept I use: The reverse process of  exercise_11_3.c and HSC ICT Book basic concept

#include <string.h>

int main()
{
    char hex[100];
    int decimal = 0, base = 1, len, i;

    printf("Enter a hexadecimal number: ");
    scanf("%s", hex);

    len = strlen(hex);

    for (i = len - 1; i >= 0; i--)
    {
        if (hex[i] >= '0' && hex[i] <= '9')
        {
            decimal += (hex[i] - '0') * base;
        }
        else if (hex[i] >= 'A' && hex[i] <= 'F')
        {
            decimal += (hex[i] - 'A' + 10) * base;
        }
        base *= 16;
    }

    printf("Decimal equivalent is: %d\n", decimal);
    return 0;
}
