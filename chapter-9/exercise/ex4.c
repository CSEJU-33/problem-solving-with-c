#include <stdio.h>
int prime (int number)
{
	int k, rem, flag;
	flag = 1;
	k = 2;
	while (k <= number - 1)
	{
		rem = number & k;
		if (rem == 0)
		{
		flag = 0;
		break;
		}
		k++;
	}
	return (flag);
}
int main(void)
{
	int number;
	printf("Enter a number \n"); scanf("%d", &number);
	if (prime (number))
		printf("%d is prime", number);
else
	return 0;
}