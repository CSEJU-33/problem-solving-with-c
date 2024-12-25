#include <stdio.h>

int main() {
    FILE *file;
    char filename[100] = "source.txt";
    char ch;
    int count = 0;

    // Open the file in read mode
    file = fopen(filename, "r");

    // Check if the file exists
    if (file == NULL) {
        printf("Could not open file %s\n", filename);
        return 1;
    }

    // Read characters from file and count them
    while ((ch = fgetc(file)) != EOF) {
        count++;
    }

    // Close the file
    fclose(file);

    // Print the total number of characters
    printf("The file %s has %d characters.\n", filename, count);

    return 0;
}