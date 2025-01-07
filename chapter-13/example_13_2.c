//Example 13.2 To illustrate the concept of pointer arithmetic
#include<stdio.h>
int main()
{
    int i, *ip; 
    ip=&i;
    printf("ip=%u\n", ip);
    ip++;
    printf("After ip++    ip=%u\n", ip);
    ip--;
    printf("After ip--    ip=%u\n", ip);
    ip=ip+2;
    printf("After ip=ip+2    ip=%u\n", ip);
    ip=ip-2;
    printf("After ip=ip-2    ip=%u\n", ip);

    return(0);
}