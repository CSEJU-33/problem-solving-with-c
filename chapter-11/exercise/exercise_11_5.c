// Question: Modify exercise_11_3.c to convert a decimal real number into its Hexadecimal equivalent. Sample Solution by Rkn

// Concept I use: We did the integer part conversion in exercise_11_3.c, now we need to add the code for the fractional part a real number can have.

#include <stdio.h>

int main()
{
    float num, frac_part;
    int int_part, temp, i = 0, precision = 5;
    char hex[100];

    printf("Enter a decimal number: ");
    scanf("%f", &num);

    int_part = (int)num; // Typecasting to int to get the integer part

    frac_part = num - int_part; // Getting the fractional part by subtracting the integer part from the number

    for (i = 0; int_part != 0; i++) // Converting the integer part to Hexadecimal, what we did in exercise_11_3.c
    {
        temp = int_part % 16;
        if (temp < 10)
        {
            hex[i] = temp + '0';
        }
        else
        {
            hex[i] = temp + 'A' - 10;
        }
        int_part /= 16;
    }

    printf("Hexadecimal equivalent is: ");
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%c", hex[j]);
    }

    if (frac_part > 0) // fraction part can be 0 if user give a integer number, so we need to check if the fraction part really exists or not. If it exists, we need to convert it to Hexadecimal.
    {
        printf(".");
        for (int k = 0; k < precision; k++)
        {
            frac_part *= 16; // CLassic HSC ICT Book method what we used to do for fraction, multiplying by base until we hit 0

            temp = (int)frac_part; // Typecasting to int to get the integer part and getting the fraction part by subtracting

            if (temp < 10)
            {
                printf("%c", temp + '0');
            }
            else
            {
                printf("%c", temp + 'A' - 10);
            }
            frac_part -= temp;
            if (frac_part == 0.0)
                break;
        }
    }

    // We use percision to limit the number of decimal places to be printed, like we don't want to print the whole number to the infinite digit

    printf("\n");
    return 0;
}
