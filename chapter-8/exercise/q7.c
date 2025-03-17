#include<stdio.h>
int main()
{
    int num,sum=0,rem;

    printf("Enter an integer: ");
    scanf("%d",&num);

    while(num!=0)
    {
        rem = num%10;
        printf("%d",rem);
        num/=10;
    }


    return (0);
}