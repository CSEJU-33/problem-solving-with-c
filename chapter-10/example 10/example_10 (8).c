#include <stdio.h>
int main()
{
    int a[2][2] = {1, 2, 3, 4};
    int b[2][2] = {1, 2, 3};
    static int c[2][2];
    int d[][3] = {1, 4, 5, 3, 6, 8};
    int i, j;

    printf("Matris A\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
            printf("%4d", a[i][j]);
        printf("\n");
    }
    printf("\n");

    printf("Matris B\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
            printf("%4d", a[i][j]);
        printf("\n");
    }
    printf("\n");

    printf("Matris C\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
            printf("%4d", a[i][j]);
        printf("\n");
    }
    printf("\n");

    printf("Matris D\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
            printf("%4d", a[i][j]);
        printf("\n");
    }
    printf("\n");

    return 0;
}