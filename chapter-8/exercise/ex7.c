#include<stdio.h>

int main(void)
{
	int n,i,sum;
	
	printf("Enter a number\n");
	scanf("%d",&n);
	
	i=1;
	sum=0;
	do
	{
		sum+=i;
		i++;
	}
	while(i<=n);
	printf("Sum=%d",sum);
	return(0);
}