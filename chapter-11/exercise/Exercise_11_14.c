#include <stdio.h>
#include <string.h>

void insertSubstring(char *mainStr, const char *subStr, int position) {
    char buffer[1000]; // Temporary buffer to hold the modified string
    int lenMain = strlen(mainStr);
    int lenSub = strlen(subStr);

    if (position < 0 || position > lenMain) {
        printf("Invalid position.\n");
        return;
    }

    // Copy the part of the main string before the insertion position
    strncpy(buffer, mainStr, position);
    buffer[position] = '\0';

    // Append the substring
    strcat(buffer, subStr);

    // Append the rest of the main string after the insertion position
    strcat(buffer, mainStr + position);

    // Copy the result back to the original string
    strcpy(mainStr, buffer);
}

int main() {
    char mainStr[1000], subStr[1000];
    int position;

    printf("Enter the main string: ");
    fgets(mainStr, sizeof(mainStr), stdin);
    mainStr[strcspn(mainStr, "\n")] = '\0'; // Remove newline character

    printf("Enter the substring to insert: ");
    fgets(subStr, sizeof(subStr), stdin);
    subStr[strcspn(subStr, "\n")] = '\0'; // Remove newline character

    printf("Enter the position to insert at: ");
    scanf("%d", &position);

    insertSubstring(mainStr, subStr, position);

    printf("Resulting string: %s\n", mainStr);

    return 0;
}
