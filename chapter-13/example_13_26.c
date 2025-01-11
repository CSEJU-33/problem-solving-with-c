//Example 13.25 To illustrate a pointer to a pointer
#include<stdio.h>
int main(){
    int a=10, *ap, **app;
    ap=&a;
    app=&ap;

    printf("Address of a=%u\n",ap);
    printf("Address of ap=%u\n",app);
    printf("Value of a through ap=%d\n",*ap);
    printf("Value of a through app=%d\n",**app);
    return(0);
    
}