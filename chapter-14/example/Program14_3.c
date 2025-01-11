#include <stdio.h>

int main(void) {
    char name[20];
    FILE *fp;
    int i, n;

    fp = fopen("names.dat", "w");

    printf("Enter the number of names \n");
    scanf("%d", &n);
    printf("Enter %d names \n", n);
    fflush(stdin);

    for (i = 1; i <= n; i++) {
        gets(name);
        fputs(name, fp);
    }

    fclose(fp);
    return 0;
}