//Example 16.1 To convert a binary number into its decimal equivalent
#include<stdio.h>
void show_bits(int);
int main(void){
    int x, y, n, x_or_y, x_and_y, x_exor_y, x_lshift, x_rshift;

    printf("Enter x and y\n");
    scanf("%d %d", &x, &y);
    printf("x="); show_bits(x);
    printf("y="); show_bits(y);

    x_or_y = x | y;
    printf("x_or_y="); show_bits(x_or_y);  

    x_and_y = x & y; 
    printf("x_and_y="); show_bits(x_and_y); 

    x_exor_y = x ^ y;
    printf("x_exor_y="); show_bits(x_exor_y);

    printf("Enter the number of bits to be shifted by \n");
    scanf("%u", &n);   
    x_lshift = x << n;
    printf("x_lshift="); show_bits(x_lshift);
    x_rshift = x >> n;
    printf("x_rshift="); show_bits(x_rshift);

    return 0;
}

void show_bits(int n){
    int i, mask, result;
    for(i=15; i>=0; i--){
        mask = 1 << i; //Application of << operator
        result = n & mask; //Application of & operator
        if(result != 0)
            printf("1");
        else
            printf("0");
        
    }
    printf("\n");
}