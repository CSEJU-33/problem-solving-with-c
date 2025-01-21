//Example 16.3 To convert a binary number into its decimal equivalent
#include<stdio.h>
int main(){
    int bin, dec=0, rem, k=1, n;
    printf("Enter a binary number\n");
    scanf("%d", &bin);
    n = bin;
    while(bin>0){
        rem = bin % 10;
        dec += rem * k;
        k <<= 1;
        bin /= 10;
    }
    printf("Decimal equivalent of the binary number %d=%d",n,dec);
    return 0;
}