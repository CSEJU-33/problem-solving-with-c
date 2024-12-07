// Question: Write a program to accept a string and display the ASCII character equivalent of each character in the string. Sample Solution by Rkn

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i;
    printf("Enter a string: ");
    gets(str); // Same reason (told in exercise_11_1.c)

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            continue; // Space's ASCII will not be printed. If you want to print space's ASCII, remove this line.
        }
        printf("ASCII value of %c = %d\n", str[i], str[i]);
    }
    return 0;
}