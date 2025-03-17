#include<stdio.h>
int main()
{
    int num,sum=0,rem;

    printf("Enter an integer: ");
    scanf("%d",&num);

    while(num!=0)
    {
        rem = num%10;
        sum = sum + rem;
        num/=10;
    }

    printf("The sum of digits is: %d",sum);

    return (0);
}