//Example 13.18 To illustrate both values and addresses as arguments
#include<stdio.h>
void lar_seclar(int, int, int, int*, int*);
int main(){
    int a,b,c,l,sl;
    printf("Enter three numbers\n");
    scanf("%d %d %d",&a, &b, &c);
    printf("Given Numbers: a=%d b=%d c=%d\n",a,b,c);

    lar_seclar(a,b,c,&l,&sl);
    printf("Largest=%d\n",l);
    printf("Seconf largest=%d\n",sl);

    return(0);
}

void lar_seclar(int a, int b, int c, int *lp, int *slp){
    int l, s, sl;
    l=a;
    if(b>l)
        l=b;
    if(c>l)
        l=c;
    s=a;
    if(b<s)
        s=b;
    if(c<s)
        s=c;
    sl=(a+b+c)-(l+s);
    *lp=l;
    *slp=sl;
}