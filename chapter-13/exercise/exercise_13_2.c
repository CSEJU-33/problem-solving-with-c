#include<stdio.h>
int main(void){
    int a[10]={1,2,5,7}, *ap, *bp;
    ap = a;
    bp = &a[3];
    printf("%d%d", *ap, *bp);
    return 0;
}