#include <stdio.h>
#include <process.h>

int main(int argc, char *argv[]) {
    FILE *fin, *fout;
    char c;

    if (argc != 3) {
        printf("Invalid number of arguments\n");
        exit(1);
    }

    fin = fopen(argv[1], "r");
    fout = fopen(argv[2], "w");

    while (!feof(fin)) {
        c = fgetc(fin);
        if (c != EOF) {
            fputc(c, fout);
        }
    }

    fclose(fin);
    fclose(fout);

    return 0;
}