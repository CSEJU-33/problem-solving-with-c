#include <stdio.h>

void strncpySim(char *target, const char *source, int n) {
    while (n-- && *source) {
        *target++ = *source++;
    }
    *target = '\0';
}

int main() {
    char source[100], target[100];
    int n;

    printf("Enter source string: ");
    gets(source);
    printf("Enter number of characters to copy: ");
    scanf("%d", &n);

    strncpySim(target, source, n);
    printf("Target string: %s\n", target);
    return 0;
}
