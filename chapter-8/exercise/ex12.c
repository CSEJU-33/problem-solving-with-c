#include<stdio.h>

int main(void)
{
	int m,n,i,j,k,flag;
	
	printf("Enter lower limit\n");
	scanf("%d",&m);
	printf("Enter upper limit\n");
	scanf("%d",&n);
	printf("Prime numbers between %d and %d \n",m,n);
	for(i=m;i<=n;i++)
	{
		k=i;
		flag=1;
		for(j=2;(j<=k/2) && flag ; j++ )
		{
		
			if(k%j==0)
			{
			flag==0;
			}
			
		}
	if(flag)
	{
	
		printf("%d\n",i);
    }
	}
	return(0);
}