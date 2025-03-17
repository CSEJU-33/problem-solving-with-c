#include<stdio.h>
int main()
{
    int num,sum,rem,temp;

    printf("Enter a number: ");
    scanf("%d",&num);

    temp = num;

    while(temp!=0)
    {
        rem = temp%10; // Get the last digit
        sum += rem*rem*rem;
        temp /= 10; // Remove the last digit
    }

    if(sum==num)
    {
        printf("Armstrong NUmber");
    }else
    {
        printf("Not a Armstrong NUmber");
    }



    return (0);
}