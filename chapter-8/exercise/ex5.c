#include<stdio.h>

int main(void)
{
	int n,i,sum;
	
	printf("Enter a number\n");
	scanf("%d",&n);
	
	sum=0;
	for(i=1;i<=n;i++)
	{
			sum+=i;
	}
	printf("sum=%d\n",sum);
	
	return(0);
}