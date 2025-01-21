//Example 16.2 To find whether a number is even or odd
#include<stdio.h>
int main(){
    int number;
    printf("Enter a number\n");
    scanf("%d", &number);
    if(number & 1)
        printf("%d is odd\n",number);
    else
        printf("%d is even\n",number);

    return 0;
}