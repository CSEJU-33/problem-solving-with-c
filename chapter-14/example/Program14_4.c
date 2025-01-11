#include <stdio.h>

int main(void) {
    char name[20];
    FILE *fp;

    printf("Strings are \n");
    fp = fopen("names.dat", "r");
    
    while (!feof(fp)) {
        fgets(name, 20, fp);
        puts(name);
        printf("\n");
    }

    fclose(fp);
    return 0;
}