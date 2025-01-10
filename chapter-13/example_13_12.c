//Example 13.12 To illustrate pointers to structures
#include<stdio.h>
struct temp{
    int i;
    float f;
    char c;
};
int main(){
    struct temp t={123, 34.56, 'p'}, *tp;
    tp=&t;
    printf("t.i=%d\n",tp->i);
    printf("t.f=%f\n",tp->f);
    printf("t.c=%c\n",tp->c);
    return(0);
}