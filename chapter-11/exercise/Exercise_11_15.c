#include <stdio.h>
#include <string.h>

void deleteSubstring(char *mainStr, const char *subStr) {
    char *pos = strstr(mainStr, subStr); // Find the first occurrence of the substring

    if (pos == NULL) {
        printf("Substring not found.\n");
        return;
    }

    // Calculate the lengths
    int lenMain = strlen(mainStr);
    int lenSub = strlen(subStr);

    // Shift the remaining part of the string left to overwrite the substring
    memmove(pos, pos + lenSub, lenMain - (pos - mainStr) - lenSub + 1);
}

int main() {
    char mainStr[1000], subStr[1000];

    printf("Enter the main string: ");
    fgets(mainStr, sizeof(mainStr), stdin);
    mainStr[strcspn(mainStr, "\n")] = '\0'; // Remove newline character

    printf("Enter the substring to delete: ");
    fgets(subStr, sizeof(subStr), stdin);
    subStr[strcspn(subStr, "\n")] = '\0'; // Remove newline character

    deleteSubstring(mainStr, subStr);

    printf("Resulting string: %s\n", mainStr);

    return 0;
}
