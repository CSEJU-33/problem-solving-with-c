#include <stdio.h> 
int fib(int); 
int main(void) 
{
int n, i; 
	printf("Enter a number \n"); 
	scanf("%d", &n); 
	for (i = 1; i <= n; i++) 
	
		printf("%d\n", fib(i)); 
	return (0); 
}
int fib(int n) 
{
	int f; 
	if (n == 1) 
		return 1; 
	else if (n == 2) 
		return 1; 
	else
		f = fib(n - 1) + fib(n-2); 
	return f; 
}
