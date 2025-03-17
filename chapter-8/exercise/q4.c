#include<stdio.h>
int main()
{
    int initial,final,d;
    printf("Enter initial range: ");
    scanf("%d",&initial);
    printf("Enter final range: ");
    scanf("%d",&final);
    printf("Enter divisor: ");
    scanf("%d",&d);

    for(int i = initial;i<=final;i++)
    {
        if(i%d==0)
        {
            printf("%d ",i);
        }
    }

    return (0);
}