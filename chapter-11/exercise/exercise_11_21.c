#include <stdio.h>
#include <string.h>

void deleteMatches(char *s1, const char *s2) {
    int hash[256] = {0};
    for (int i = 0; s2[i]; i++) hash[(unsigned char)s2[i]] = 1;

    char result[100];
    int k = 0;
    for (int i = 0; s1[i]; i++) {
        if (!hash[(unsigned char)s1[i]])
            result[k++] = s1[i];
    }
    result[k] = '\0';
    strcpy(s1, result);
}

int main() {
    char s1[100], s2[100];
    printf("Enter first string: ");
    gets(s1);
    printf("Enter second string: ");
    gets(s2);

    deleteMatches(s1, s2);
    printf("Resultant string: %s\n", s1);
    return 0;
}
