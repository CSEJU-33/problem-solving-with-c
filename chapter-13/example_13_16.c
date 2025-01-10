//Example 13.16 To illustrate call by value and call by reference
#include<stdio.h>
void inc(int);
void incr(int*);
int main(){
    int a=10, b=10;
    printf("Call By Value\n");
    printf("a=%d\n",a);
    inc(a);
    printf("After calling inc()\n");
    printf("a=%d\n",a);
    printf("Call By Reference\n");
    printf("b=%d\n",b);
    incr(&b);
    printf("After calling incr()\n");
    printf("b=%d\n",b);
    return(0);
}
void inc(int x){
    x++;
    printf("x=%d\n",x);
}
void incr(int *p){
    (*p)++;
}