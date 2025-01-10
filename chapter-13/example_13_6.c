//Example 13.6 To access the elements of an array through a pointer variable
#include<stdio.h>
int main(){
    int a[5] = {4,6,7,5,2};
    int *p1, *p2;
    p1=a;
    p2=&a[4];
    printf("The elements of the array a\n");
    while(p1<=p2){
        printf("%3d",*p1);
        p1++;
    }
    return (0);
}