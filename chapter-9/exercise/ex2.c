#include <stdio.h>
void largest (int a, int b, int c);

int main(void)
{
	int a, b, c;
	int x, y, z;
	printf("Enter values of a, b and c \n");
	scanf("%d %d%d", &a, &b, &c);
	largest (a, b, c);
	printf("Enter values of x, y and z \n"); 
	scanf("%d %d%d", &x, &y, &z);
	largest (x, y, z);
	return 0;	
}
void largest (int a, int b, int c)
{
	int l;
	l = a;
	if (b> l)
		l = b;
	if (c > l)
		l = c;
	printf("Largest = %d\n", l);
}
