//Example 13.7 To illustrate processing 2-D arrays using pointer notations
#include<stdio.h>
int main(){
    int a[10][10], m, n, i, j;

    printf("Enter the order of the matrix a\n");
    scanf("%d%d", &m, &n);

    printf("Enter elements of the matrix a of order %d * %d\n", m, n);
    for(i=0; i<m; i++)
    for(j=0; j<n; j++)
        scanf("%d", *(a+i)+j);

    printf("Matrix a\n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++)
            printf("%4d ", *(*(a+i)+j));
        printf("\n");
    }
    return(0);
}