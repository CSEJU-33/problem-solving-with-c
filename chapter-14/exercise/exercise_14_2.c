#include <stdio.h>
#include <stdlib.h>

void copyFile(const char *sourceFile, const char *destFile) {
    FILE *source, *dest;
    char ch;

    source = fopen(sourceFile, "r");
    if (source == NULL) {
        printf("Cannot open source file.\n");
        exit(EXIT_FAILURE);
    }

    dest = fopen(destFile, "w");
    if (dest == NULL) {
        fclose(source);
        printf("Cannot open destination file.\n");
        exit(EXIT_FAILURE);
    }

    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, dest);
    }

    printf("File copied successfully.\n");

    fclose(source);
    fclose(dest);
}

int main() {
    const char *sourceFile = "source.txt";
    const char *destFile = "destination.txt";

    copyFile(sourceFile, destFile);

    return 0;
}