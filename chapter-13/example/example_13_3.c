//Example 13.3 To illustrate pointer expressions
#include<stdio.h>
int main(){
    int a=4, b=2, *ap, *bp, *sp;
    int s, d, p, q, r, t;
    ap=&a;
    bp=&b;
    s=*ap+*bp;
    d=*ap-*bp;
    p=*ap * *bp;
    q=*ap / *bp;
    r=*ap % *bp;
    sp=&t;
    *sp= *ap + *bp;
    printf("Sum= %d\n", s);
    printf("Difference= %d\n", d);
    printf("Product= %d\n", p);
    printf("Quotient= %d\n", q);
    printf("Remainder= %d\n", r);
    printf("Sum= %d\n", t);
    return(0);
}