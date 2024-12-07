#include <stdio.h>
#include <string.h>

int findFirstMatch(const char *s1, const char *s2) {
    int hash[256] = {0};
    for (int i = 0; s2[i]; i++) hash[(unsigned char)s2[i]] = 1;

    for (int i = 0; s1[i]; i++) {
        if (hash[(unsigned char)s1[i]]) return i;
    }
    return -1;
}

int main() {
    char s1[100], s2[100];
    printf("Enter first string: ");
    gets(s1);
    printf("Enter second string: ");
    gets(s2);

    int pos = findFirstMatch(s1, s2);
    if (pos != -1)
        printf("First matching character at position: %d\n", pos);
    else
        printf("No matching character found.\n");
    return 0;
}
