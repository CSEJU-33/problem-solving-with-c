#include <stdio.h>
// To accept values into an array.
int main()
{
    int a[5], i;

    printf("Enter five values: ");
    for (i = 0; i <= 4; i++)
        scanf("%d", &a[i]);

    printf("The values in the array are: \n");
    for (i = 0; i <= 4; i++)
        printf("a[%d]= %d\n",i, a[i]);

    return 0;
}