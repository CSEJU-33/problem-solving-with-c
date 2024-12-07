// Question: Write a program to convert a decimal integer number to its hexadecimal number equivalent. Sample Solution by Rkn

// Concept I used: In ASCII, 0-9 are represented by 48-57 and A-F are represented by 65-70. So, if the remainder is less than 10, then add 48 to it to get the ASCII value of the digit. If the remainder is greater than 10, then add 55 to it to get the ASCII value of the alphabet.

#include <stdio.h>

int main()
{
    int num, i;
    char hex[100];
    printf("Enter a decimal number: ");
    scanf("%d", &num);

    for (i = 0; num != 0; i++)
    {
        int temp = num % 16;
        if (temp < 10) // If remainder is less than 10, it should give us (0-9)
        {
            hex[i] = temp + 48; // read the concept I used in the comment above
        }
        else // If remainder is greater than (10-15), it should give us (A-F)
        {
            hex[i] = temp + 55; // read the concept I used in the comment above
        }
        num = num / 16;
    }
    printf("Hexadecimal equivalent is: ");
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%c", hex[j]); // Printing the hexadecimal number in reverse order, classic HSC ICT book problem.
    }
    return 0;
}