//Example 13.27 To illustrate malloc(): Creation of an array dynamically
#include<stdio.h>
#include<malloc.h>

int main(){
    int *a, n, i;
    printf("Enter the number of elements:: ");
    scanf("%d",&n);
    a=malloc(n*sizeof(int)); //allocate memory for n integers

    printf("Enter %d elements\n ",n);
    for(i=0;i<n;i++){
        scanf("%d",a+i);
    }
    printf("The list of elements\n");
    for(i=0;i<n;i++){
        printf("%4d",*(a+i));
    }
    free(a); //Release the allocated memory
    return(0);
}