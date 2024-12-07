#include <stdio.h>

void strncatSim(char *target, const char *source, int n) {
    while (*target) target++;  // Move to the end of target
    while (n-- && *source) {
        *target++ = *source++;
    }
    *target = '\0';
}

int main() {
    char source[100], target[100] = "Hello ";
    int n;

    printf("Enter source string: ");
    gets(source);
    printf("Enter number of characters to concatenate: ");
    scanf("%d", &n);

    strncatSim(target, source, n);
    printf("Resultant string: %s\n", target);
    return 0;
}
