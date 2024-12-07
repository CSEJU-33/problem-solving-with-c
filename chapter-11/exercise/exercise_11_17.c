#include <stdio.h>
#include <ctype.h>

int strempi(const char *s1, const char *s2) {
    while (*s1 && *s2) {
        if (tolower(*s1) != tolower(*s2))
            return tolower(*s1) - tolower(*s2);
        s1++;
        s2++;
    }
    return tolower(*s1) - tolower(*s2);
}

int main() {
    char str1[100], str2[100];
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    if (strempi(str1, str2) == 0)
        printf("Strings are equal (case-insensitive).\n");
    else
        printf("Strings are not equal.\n");
    return 0;
}
