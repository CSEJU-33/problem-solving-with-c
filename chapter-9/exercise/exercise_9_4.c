#include <stdio.h>
#include <stdbool.h>
bool isPerfect(int num) {
    int sum=0;
    for (int i=1;i<=num/2;i++) {
        if(num%i==0) sum+=i;
    }
    if(sum == num) {
        return 1;  // True: Perfect number
    } else {
        return 0;  // False: Not a perfect number
}


int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    isPerfect(num)?printf("The number is a perfect number"):printf("The number is not a perfect number");
    return 0;
}