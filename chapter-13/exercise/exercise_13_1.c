#include<stdio.h>
int main(void){
    int a[10], *ap, *bp;
    ap = a;
    bp = &a[0];
    printf("%d\n", ap-bp);
    return 0;
}