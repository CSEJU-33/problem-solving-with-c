//Example 13.17 To illustrate passing call by value and call by reference 
#include<stdio.h>
void swap(int, int);
void swapr(int*, int*);

int main(){
    int a=5, b=6;
    int c=7, d=8;

    printf("Call by Value\n");
    printf("a=%d b=%d\n",a,b);
    swap(a,b);
    printf("After calling swap() values in main\n");
    printf("a=%d b=%d\n",a,b);

    printf("Call by Reference\n");
    printf("c=%d d=%d\n",c,d);
    swapr(&c,&d);
    printf("After calling swapr() values in main\n");
    printf("c=%d d=%d\n",c,d);

    return(0);
}

void swap(int x, int y){
    int t;
    t=x;
    x=y;
    y=t;
    printf("x=%d y=%d\n",x,y);
}

void swapr(int *p, int *q){
    int t;
    t=*p;
    *p=*q;
    *q=t;
    printf("p=%d q=%d\n",*p,*q);
}