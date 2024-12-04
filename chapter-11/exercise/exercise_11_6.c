// Question: Modify exercise_11_4.c to convert a hexadecimal real number into its decimal equivalent. Sample Solution by Rkn

#include <stdio.h>
#include <string.h>

int main()
{
    char hex[100];
    int int_part = 0, i = 0, len;
    float frac_part = 0.0;
    int base = 1;
    float dec_value;

    printf("Enter a hexadecimal number: ");
    scanf("%s", hex);

    len = strlen(hex);

    
    for (i = 0; i < len; i++) 
    {
        if (hex[i] >= '0' && hex[i] <= '9')
        {
            int_part = int_part * 16 + (hex[i] - '0');
        }
        else if (hex[i] >= 'A' && hex[i] <= 'F')
        {
            int_part = int_part * 16 + (hex[i] - 'A' + 10);
        }
        else if (hex[i] == '.')
        {
            break;
        }
    } // This part is same as exercise_11_4.c, but we started from front this time and need to stop when we hit the decimal point. I wrote like this to avoid using pow() function. If you find it difficult to understand, you can use pow() function to calculate the integer part or you think of an example of a integer decimal number and think of its place values. For example, a decimal number is 1234. We can write 1*10 + 2 = 12; then 12*10 + 3 = 123 and then 123*10 + 4 = 1234. We can do the same thing for hexadecimal number.

    if (hex[i] == '.') // We need to check if the decimal point exists or not, because user can give a integer number.
    {
        i++; // Skip the decimal point
        base = 16;
        for (int j = i; j < len; j++) // Now this loop will start from the fractional part of the hexadecimal number
        {
            if (hex[j] >= '0' && hex[j] <= '9')
            {
                frac_part += (hex[j] - '0') / (float)base;
            }
            else if (hex[j] >= 'A' && hex[j] <= 'F')
            {
                frac_part += (hex[j] - 'A' + 10) / (float)base;
            }

            base *= 16;
        }
    }

    dec_value = int_part + frac_part;

    printf("Decimal equivalent is: %.4f\n", dec_value);
    return 0;
}