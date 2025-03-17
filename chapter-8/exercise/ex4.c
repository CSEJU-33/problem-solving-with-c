#include<stdio.h>

int main(void)
{
	int n,i,f1,f2,f3;
	
	printf("Enter the number of members to be generated\n");
	scanf("%d",&n);
	printf("First %d members of Fibonacci  series\n");
	f1=1;
	f2=1;
	printf("%d\n",f1);
	printf("%d\n",f2);
	i=3;
	while(i<=n)
	{
		f3=f1+f2;
		printf("%d\n",f3);
		f1=f2;
		f2=f3;
		i++;
	}
	return(0);
}