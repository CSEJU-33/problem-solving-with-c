#include <stdio.h>
#include <process.h>

int main(void) {
    FILE *fp;

    fp = fopen("books.dat", "r");
    if (fp == NULL) 
        printf("The file books.dat does not exist\n");
    fp = fopen("students.dat", "w");
        if (fp == NULL) 
            printf("The read-only file students.dat cannot be opened in write mode\n");

    fp = fopen("text.dat", "r");
    fputc('a', fp);
    if (ferror(fp)) {
        printf("The file text.dat has been opened in read mode\n");
        printf("but you are writing to it.\n");
    }

    fclose(fp);
    return 0;
}