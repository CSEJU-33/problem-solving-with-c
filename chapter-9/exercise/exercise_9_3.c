#include <stdio.h>

float calculate(int v1,int v2, char op){
    switch(op){
        case '+':
            return v1+v2;
        case '-':
            return v1-v2;
        case '*':
            return v1*v2;
        case '/':
            return v1/v2;
        default:
            return 0;
    }
}

int main() {
    int v1,v2;
    char op;
    printf("Enter the first value: ");
    scanf("%d", &v1);
    printf("Enter the second value: ");
    scanf("%d", &v2);
    printf("Enter the operator: ");
    scanf(" %c", &op);
    printf("\nafter calculation %d %c %d = %.2f\n",v1,op,v2, calculate(v1,v2,op));
    return 0;
}