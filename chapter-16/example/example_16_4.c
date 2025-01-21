//To illustrate the concept of bit-fields
#include<stdio.h>
struct temp{
    int a:3;
    int b:3;
    unsigned int c:2;
};
int main(){
    struct temp t;
    t.a = 3;
    t.b = 2;
    t.c = 3;
    printf("t.a=%d\n",t.a);
    printf("t.b=%d\n",t.b);
    printf("t.c=%u\n",t.c);

    printf("Size =%d\n",sizeof(struct temp));
    return 0;
}