#include<stdio.h>

int main(void)
{
	int number,i,product;
	
	printf("Enter a number\n");
	scanf("%d",&number);
	
	for(i;i<=10;i++)
	{
		product=number*i;
		printf("%d*%d=%d\n",number,i,product);
	}
	return(0);
}