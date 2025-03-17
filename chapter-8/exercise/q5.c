#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    printf("The divisors are: ");
    for(int i=1;i<=num/2;i++)
    {
        if(num%i==0)
        {
            printf("%d ",i);
        }
    }

    return (0);
}