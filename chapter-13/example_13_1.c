//Example 13.1 To illustrate the concept of pointers and pointer operations
#include<stdio.h>
int main()
{
    int i=10, *ip;
    float f=3.4, *fp;
    char c='a', *cp;
    printf("i=%d\n", i);
    printf("f=%f\n", f);
    printf("c=%c\n", c);
    ip=&i;
    printf("\nAdress of i=%u\n", ip);
    printf("Value of i=%d\n",*ip);
    fp=&f;
    printf("\nAdress of f=%u\n",fp);
    printf("Value of f=%f\n",*fp);
    cp=&c;
    printf("\nAdress of c=%u\n",cp);
    printf("Value of c=%c\n",*cp);
    return(0);
}