#include<stdio.h>

int main(void)
{
	int number,k,flag,rem;
	
	printf("Enter a number\n");
	scanf("%d",&number);
	k=2;
	flag=1;
	
	while((k<=number/2)&&(flag==1))
	{
		rem=number%k;
		if(rem==0)
			flag=0;
		k++;	
	}
	if (flag==1)
		printf("%d is prime \n",number);
	else
		printf("%d is not prime\n",number);
	return(0);
}