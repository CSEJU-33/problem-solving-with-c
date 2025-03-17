#include<stdio.h>

int main(void)
{
	int number,i,j,sum,count;
	
	for(i=1;i<=2;i++)
	{
			sum=0;
			count=0;
			printf("Enter five numbers for set %d\n",i);
			for(j=1;j<=5;j++)
			{
				scanf("%d",&number);
				if(number<0)
					continue;
				count++;
				sum=sum+number;
			}
			printf("Sum of %d  +ve numbers in set %d =%d\n ",count,i,sum);
	}
	return(0);
}

