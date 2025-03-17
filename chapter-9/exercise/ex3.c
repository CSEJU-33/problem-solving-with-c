#include <stdio.h>
int largest (int a, int b, int c);
int main(void)
{
	int a, b, c, lar;
	int x, y, z;
	printf("Enter values of a, b and c \n");
	scanf("%d%d%d", &a, &b, &c);
	lar = largest (a, b, c);
	printf("Largest = %d\n", lar);
	printf("Enter values of x, y and z \n");
	scanf("%d%d%d", &x, &y, &z);
	lar = largest (x, y, z);
	printf("Largest = %d\n", lar); 
	return 0;	
}
int largest (int a, int b, int c)
{
	int largest;
	largest = a;
	if (b> largest)
		largest = b;
	if (c> largest)
		largest = c;
	return (largest);
}
