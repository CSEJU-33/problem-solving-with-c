#include<stdio.h>

int main(void)
{
	int n,i,sum=0,number;
	
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	printf("Enter %d numbers type -ve number to terminate\n",n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&number);
		if(number<0)
			break;
		sum+=number;
	}
	printf("sum of %d positive numbers = %d\n",i-1,sum);
	
	return(0);
}