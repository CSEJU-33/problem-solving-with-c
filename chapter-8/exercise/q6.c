#include<stdio.h>

int main(void)
{
	int num,digit,rem,count=0;
	printf("Enter  an integer:");
	scanf("%d",&num);
	printf("Enter the digit to find:");
	scanf("%d",&digit);
	
	while (num!=0)
	{
		rem=num%10;
		if(rem==digit){
			count++;
		}
		num/=10;
	}
	printf("The digit %d occurs %d times",num,count);
	return(0);
}