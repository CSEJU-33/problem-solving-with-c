#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LEN 100

void mergeFiles(const char *file1, const char *file2, const char *outputFile) {
    FILE *fp1 = fopen(file1, "r");
    FILE *fp2 = fopen(file2, "r");
    FILE *fpOut = fopen(outputFile, "w");

    if (fp1 == NULL || fp2 == NULL || fpOut == NULL) {
        perror("Error opening files");
        exit(EXIT_FAILURE);
    }

    char line1[MAX_LINE_LEN], line2[MAX_LINE_LEN];
    int num1, num2;
    char name1[MAX_LINE_LEN], name2[MAX_LINE_LEN];
    float salary1, salary2;

    int read1 = fscanf(fp1, "%d %s %f", &num1, name1, &salary1);
    int read2 = fscanf(fp2, "%d %s %f", &num2, name2, &salary2);

    while (read1 != EOF && read2 != EOF) {
        if (num1 < num2) {
            fprintf(fpOut, "%d %s %.2f\n", num1, name1, salary1);
            read1 = fscanf(fp1, "%d %s %f", &num1, name1, &salary1);
        } else {
            fprintf(fpOut, "%d %s %.2f\n", num2, name2, salary2);
            read2 = fscanf(fp2, "%d %s %f", &num2, name2, &salary2);
        }
    }

    while (read1 != EOF) {
        fprintf(fpOut, "%d %s %.2f\n", num1, name1, salary1);
        read1 = fscanf(fp1, "%d %s %f", &num1, name1, &salary1);
    }

    while (read2 != EOF) {
        fprintf(fpOut, "%d %s %.2f\n", num2, name2, salary2);
        read2 = fscanf(fp2, "%d %s %f", &num2, name2, &salary2);
    }

    fclose(fp1);
    fclose(fp2);
    fclose(fpOut);
}

int main() {
    const char *file1 = "file1.txt";
    const char *file2 = "file2.txt";
    const char *outputFile = "merged.txt";

    mergeFiles(file1, file2, outputFile);

    printf("Files merged successfully into %s\n", outputFile);

    return 0;
}