#include <stdio.h>
#include <stdbool.h>
#include <math.h>
bool isArmstrong(int num) {
    int sum=0;
    int mem=num;
    while (num>0) {
        int digit = num%10;
        sum += (int)pow(digit, 3);
        num/=10;
    }
    return sum==mem;
}


int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    isArmstrong(num)?printf("The number is an armstrong number"):printf("The number is not an armstrong number");
    return 0;
}