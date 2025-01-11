//Example 13.5 To find out the minimum and maximum values in a list of values
#include <stdio.h>
int main()
{
    int a[10], i, n, min, max;
    printf("Enter the number of values (1-10)\n");
    scanf("%d", &n);
    printf("Enter %d values\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", a+i);
    
    /*Finding the minimum starts*/
    min = *(a+0);
    for (i = 1; i < n; i++)
        if (*(a+i) < min)
            min = *(a+i);
    /*Finding the minimum ends*/
    
    /*Finding the maximum starts*/
    max = *(a+0);
    for (i = 1; i < n; i++)
        if (*(a+i) > max)
            max = *(a+i);
    /*Finding the maximum ends*/
    
    printf("Minimum= %d\n", min);
    printf("Maximum= %d\n", max);
    
    return (0);
}