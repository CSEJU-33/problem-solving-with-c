#include<stdio.h>

int main(void)
{
	int number,i,j,sum;
	
	for(i=1;i<=2;i++)
	{
		sum=0;
		printf("Enter five numbers for set %d\n",i);
		for(j=1;j<=5;j++)
		{
			scanf("%d",&number);
			if(number<0)
				break;
			sum=sum+number;
		}
		printf("Sum of %d numbers in set %d = %d\n\n",j-1,i,sum);
	}
	return(0);
}