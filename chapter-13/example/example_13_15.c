//Example 13.15 To illustrate pointers as members of unions
#include<stdio.h>
union temp{
    int i;
    int *ip;
};
int main(){
    union temp t;
    int a=20;
    t.i=a;
    printf("t.i=%d\n",t.i);
    t.ip=&a;
    printf("*(t.ip)=%d",*(t.ip));
    return(0);
}