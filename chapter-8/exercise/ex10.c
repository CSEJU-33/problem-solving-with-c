#include<stdio.h>

int main(void)
{
	int n,i,sum=0,number;
	
	printf("Enter numbers of numbers\n");
	scanf("%d",&n);
	printf("Enter %d numbers\n",n);
	for (i=1;i<=n;i++)
	{
		scanf("%d",&number);
		if(number<0)
			continue;
		sum+=number;
	}
	printf("sum of +ve numbers=%d\n",sum);
	
	return(0);
}