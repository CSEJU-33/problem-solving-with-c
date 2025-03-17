#include <stdio.h>
#include <process.h>
int fact (int);
int main(void)
{
	int n, f;
	printf("Enter a number \n"); scanf("%d", &n);
	f = fact (n);
	printf("Factorial = %d\n", f);
	return (0);
}
int fact (int n)
{
	int f = 1, i;
	if (n< 0)
	{
		printf("The number entered is -ve \n"); 
		exit(0);
	}
	else
	{
		for (i = 1; i <= n; i++)
		f *= i;
	}
	return (f);
}

	
	
