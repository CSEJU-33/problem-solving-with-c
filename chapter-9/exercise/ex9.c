#include <stdio.h>
int fact (int);
int main(void)
{
	int n, f;
	printf("Enter a number \n");
	scanf("%d", &n);
	f = fact (n);
	printf("fact = %d\n", f);
	return (0);
}
int fact (int n)
{
	int f;
	if (n == 0)
		return (1);
	else
		f = n * fact (n - 1);
	return f;
}
