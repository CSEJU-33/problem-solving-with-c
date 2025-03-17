#include<stdio.h>

int main(void)
{
	int m,n,i,j,p;
	
	printf("Enter lower limit\n");
	scanf("%d",&m);
	printf("Enter Upper limit\n");
	scanf("%d",&n);
	
	for (i=m;i<=n;i++)
	{
		for(j=1;j<=10;j++)
		{
			p=i*j;
			printf("%4d",p);
			
		}
		printf("\n");
	}
	return(0);
}