//Example 13.4 To illustrate processing one-dimensional arrays using pointers
#include<stdio.h>
int main(){
    int a[10], n, i;

    printf("Enter the number of elements\n");
    scanf("%d", &n);

    printf("Enter %d elements\n", n);
    for(i=0; i<n; i++)
        scanf("%d", a+i);

    printf("The list of elements\n");
    for(i=0; i<n; i++)
        printf("%d ", *(a+i));
    return(0);
}