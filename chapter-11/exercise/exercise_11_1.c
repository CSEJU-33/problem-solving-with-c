// Question: Write a program to count the number of words in a line of text. Sample Solution by Rkn

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, count = 0;
    printf("Enter a line of text: ");
    gets(str); //I used gets() function instead of scanf to read the string because it can read the string with spaces. Scanf can't read the string with spaces.

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            count++;
        }
    }
    printf("Total number of words in the given text is: %d\n", count + 1);
    return 0;
}