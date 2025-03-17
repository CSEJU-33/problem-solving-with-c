#include <stdio.h>

int reverseHelper(int num, int rev) {
    if (num == 0) {
        return rev;
    }
    return reverseHelper(num / 10, rev * 10 + num % 10);
}


int reverse(int num) {
    return reverseHelper(num, 0);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Reverse of %d is %d\n", num, reverse(num));
    return 0;
}