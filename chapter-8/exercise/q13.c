#include<stdio.h>
int main()
{
    int initial,final,sum=0,rem,temp,i;
    printf("Enter initial range: ");
    scanf("%d",&initial);
    printf("Enter final range: ");
    scanf("%d",&final);
    
    printf("The armstrong number between the ranges are: ");

    for(i=initial; i<=final; i++)
    {
        temp = i;
		sum = 0;
        while(temp!=0)
        {
            rem = temp%10;
            sum = sum + rem*rem*rem;
            temp /= 10;
        }

        if(sum==i)
        {
            printf("%d ",i);
        }
        
    }


    return (0);
}