//Example 13.19 To illustrate a function returning a pointer
#include<stdio.h>
int *sum(int, int);
int main(){
    int a, b, *s;
    printf("Enter two numbers\n");
    scanf("%d %d", &a, &b);
    printf("a=%d  b=%d\n",a,b);
    s=sum(a,b);
    printf("sum=%d\n",*s);
    return(0);
}

int *sum(int a, int b){
    static int s;
    s=a+b;
    return(&s);
}