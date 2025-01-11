#include <stdio.h>
#include <stdlib.h>

struct emp {
    int empno;
    char name[20];
    float salary;
};

int main(void) {
    FILE *fp, *fs;
    struct emp *ep, e, t;
    int position, i = 0, j, nor;

    fp = fopen("emp.dat", "rb");
    if (fp == NULL) {
        printf("Error opening emp.dat\n");
        return 1;
    }

    printf("\nUnsorted List of Employees\n");
    while (fread(&e, sizeof(e), 1, fp)) {
        printf("%6d%20s%8.2f\n", e.empno, e.name, e.salary);
    }

    fseek(fp, 0, SEEK_END);
    position = ftell(fp);
    nor = position / sizeof(struct emp);
    ep = (struct emp *) malloc(sizeof(struct emp) * nor);

    fseek(fp, 0, SEEK_SET);
    while (fread(&e, sizeof(e), 1, fp)) {
        ep[i] = e;
        i++;
    }
    fclose(fp);

    /* sorting begins */
    for (i = 0; i < nor; i++) {
        for (j = i + 1; j < nor; j++) {
            if (ep[i].salary > ep[j].salary) {
                t = ep[i];
                ep[i] = ep[j];
                ep[j] = t;
            }
        }
    }
    /* sorting ends */

    fs = fopen("emps.dat", "wb");
    
    for (i = 0; i < nor; i++) {
        fwrite(&ep[i], sizeof(ep[i]), 1, fs);
    }
    fclose(fs);

    printf("\nSorted List of Employees in the increasing order of salary\n");
    fs = fopen("emps.dat", "rb");
    

    while (fread(&e, sizeof(e), 1, fs)) {
        printf("%6d%20s%8.2f\n", e.empno, e.name, e.salary);
    }
    fclose(fs);

    free(ep);
    return 0;
}