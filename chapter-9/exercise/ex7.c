#include <stdio.h>
int fact (int);
int npr (int, int);
int main(void)
{
	int n, r, p;
	printf("Enter the values of n and r\n");
	scanf("%d%d", &n, &r);
	p = npr (n, r);
	printf("The number of permutations of %d items out of %d items = %d ",r, n, p);
	return 0;
}
int fact (int n)
{
	int i, f = 1;
	for (i = 1; i <= n; i++)
		f *= i;
	return f;
}
int npr (int n, int r)
{

	int p;
	p=fact(n)/fact(n-r);
	return p;
}
