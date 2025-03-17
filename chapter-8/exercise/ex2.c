#include<stdio.h>

int main(void)
{
	int n,rem,sum;
	
	printf("Enter an integer:\n");
	scanf("%d",&n);
	
	sum=0;
	while(n>0)
	{
		rem=n%10;
		sum+=rem;
		n/=10;
	}
	
	printf("sum=%d",sum);
	return(0);
}