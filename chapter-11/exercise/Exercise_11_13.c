#include <stdio.h>
#include <string.h>

int countOccurrences(const char *str, const char *sub) {
    if (*sub == '\0') return 0; // Avoid infinite loop if substring is empty

    int count = 0;
    const char *pos = str;

    while ((pos = strstr(pos, sub)) != NULL) {
        count++;
        pos += strlen(sub); // Move the pointer forward by the length of the substring
    }

    return count;
}

int main() {
    char str[1000], sub[1000];

    printf("Enter the main string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove newline character from input

    printf("Enter the substring to find: ");
    fgets(sub, sizeof(sub), stdin);
    sub[strcspn(sub, "\n")] = '\0'; // Remove newline character from input

    int occurrences = countOccurrences(str, sub);
    printf("The substring \"%s\" occurs %d times in the main string.\n", sub, occurrences);

    return 0;
}
