//Example 13.24 To illustrate pointers to functions
#include<stdio.h>
int sum(int, int);

int main(){
    int a, b, s;
    int (*fnp)(int,int);
    printf("Enter two numbers:: ");
    scanf("%d %d", &a, &b);
    fnp=sum;
    s=(*fnp)(a,b);
    printf("\nsum = %d",s );
    return(0);
}

int sum (int a, int b){
    int s;
    s=a+b;
    return s;
}