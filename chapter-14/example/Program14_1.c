#include <stdio.h>

int main(void) {
    FILE *fp;
    char c;

    fp = fopen("text", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Keep typing characters. Type 'q' to terminate \n");
    c = getchar();
    while (c != 'q') {
        fputc(c, fp);
        c = getchar();
    }

    fclose(fp);
    return 0;
}