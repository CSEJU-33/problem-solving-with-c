//Example 13.13 To illustrate structure containing pointer
#include<stdio.h>
struct temp{
    int i;
    int *ip;
};
int main(){
    struct temp t;
    int a=10;
    t.i=a;
    t.ip=&a;
    printf("Value of a = %d\n",t.i);
    printf("Address of a = %u\n",t.ip);
    return(0);
}