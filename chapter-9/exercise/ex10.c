#include <stdio.h>
int sum (int);
int main(void)
{
	int number, s;
	printf("Enter a number \n");
	scanf("%d", &number);
	s = sum(number);
	printf("sum = %d \n", s);
	return 0;
}
int sum(int number)
{
	int s;
	if (number == 0) 
		return 0;
	else
		s = number % 10+ sum (number / 10); 
	return s;
}
