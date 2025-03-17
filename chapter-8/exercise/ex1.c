#include<stdio.h>

int main(void)
{
	int n,sum,i;
	printf("Enter a number:\n");
	scanf("%d",&n);
	
	sum=0;
	i=1;
	abf:
		sum+=i;
		i++;
		if(i<=n) goto abf;
	printf("Sum=%d\n",sum);
	
	return(0);
}