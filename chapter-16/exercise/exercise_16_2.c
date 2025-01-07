#include <stdio.h>
// 2's complement
int twosComplement(int n){
    int found = 0, mask, i;
    for (i = 0; i < 16; i++){
        mask = 1 << i;
        if ((n & mask) != 0){   found = 1;
        }
        if(found){  n^=mask;
        }
    }
    return n;
}
void showBits(int n){
    int i, mask, result;
    for (i = 15; i >= 0; i--){
        mask = 1 << i;
        result = mask & n;
        if (result != 0)     printf("1");
        else    printf("0");
    }
    printf("\n");
}
int main(){
    int n, result;
    printf("Enter a Decimal number: ");
    scanf("%d", &n);
    printf("The Binary equivalent of %d = ", n);
    showBits(n);
    result = twosComplement(n);
    printf("2's complement: ");
    showBits(result);
    return 0;
}
