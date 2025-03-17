#include <stdio.h>
void largest (void);
int main(void)
{

	largest ();
	return 0;
}

void largest (void)
{
	int a, b, c, l;
	printf("Enter three numbers \n"); 
	scanf("%d %d%d", &a, &b,&c);
	l = a;
	if (b> 1)
	l = b;
	if (c > 1)
	l = c;
	printf("Largest = %d\n", l);
}


