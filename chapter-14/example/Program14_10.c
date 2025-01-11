#include <stdio.h>

struct emp {
    int empno;
    char name[20];
    float salary;
};

int main(void) {
    FILE *fin, *fout;
    struct emp e;
    int eno;

    fin = fopen("emp.dat", "rb");
    fout = fopen("emp1.dat", "wb");

    printf("Enter empno of the employee to be deleted \n");
    scanf("%d", &eno);

    while (fread(&e, sizeof(e), 1, fin)) {
        if (e.empno != eno) {
            fwrite(&e, sizeof(e), 1, fout);
        }
    }

    fclose(fin);
    fclose(fout);
    remove("emp.dat");
    rename("emp1.dat", "emp.dat");

    return 0;
}