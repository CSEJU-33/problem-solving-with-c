#include <stdio.h>

float largest (float, float);
int main(void)
{
	float a, b, c;
	printf("Enter two float values \n");
	scanf("%f%f", &a, &b);
	c = largest (a, b);
	printf(" largest = %f \n", c);
	return 0;
}
float largest (float f, float g)
{
	float l;
	l = f;
	if (g> l)
		l=g;
	return (l);
}
