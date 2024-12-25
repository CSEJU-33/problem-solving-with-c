#include <stdio.h>
#include <stdlib.h>

void extract_substring(char *source, int start, int length, char *destination) {
    // Move the source pointer to the start position
    source += start;

    // Copy the substring to the destination
    for (int i = 0; i < length; i++) {
        destination[i] = source[i];
    }

    // Null-terminate the destination string
    destination[length] = '\0';
}

int main() {
    char source[] = "Hello, World!";
    int start = 7;
    int length = 5;
    char destination[length + 1];

    extract_substring(source, start, length, destination);

    printf("Extracted substring: %s\n", destination);

    return 0;
}