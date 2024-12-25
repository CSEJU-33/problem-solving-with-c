#include <stdio.h>
// To illustrate initialization of arrays of one dimension.
int main()
{
    int a[5] = {
        4,
        5,
        7,
        9,
        2,
    };
    int b[5] = {6, 8, 5};
    static int d[5];
    int i;

    printf("Elements in the array a: \n");
    for (i = 0; i < 5; i++)
        printf("a[%d]= %d\n", i, a[i]);

    printf("Elements in the array b: \n");
    for (i = 0; i < 3; i++)
        printf("b[%d]= %d\n", i, b[i]);

    printf("Elements in the static arra d: \n");
    for (i = 0; i < 5; i++)
        printf("d[%d]= %d\n", i, d[i]);

    return 0;
}