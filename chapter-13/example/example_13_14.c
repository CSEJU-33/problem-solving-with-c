//Example 13.14 To illustrate pointers to unions
#include<stdio.h>
union temp{
    int i;
    float f;
};
int main(){
    union temp t, *tp;
    tp=&t;
    t.i=10;
    printf("t.i=%d\n",tp->i);
    t.f=12.35;
    printf("t.f=%5.2f",tp->f);
    return(0);
}