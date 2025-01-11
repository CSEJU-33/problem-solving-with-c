#include <stdio.h>

int main(void) {
    FILE *fp;
    char c;

    printf("The contents of the file 'text' are: \n");
    fp = fopen("text", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    while (!feof(fp)) {
        c = fgetc(fp);
        putchar(c);
    }

    fclose(fp);
    return 0;
}