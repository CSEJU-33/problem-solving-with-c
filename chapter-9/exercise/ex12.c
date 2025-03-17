#include<stdio.h>
float power (int x, int y)
{

	float p; 
	if (y == 0) 
		return (1); 
	else if (y > 0) 
		p = x * power (x, y - 1); 
	else 	
		p = 1/ power (x, y); 
	return (p); 
}
int main(void) 
{
	int x, y; 
	float p; 
	printf("Enter the values of x and y \n"); 
	scanf("%d %d", &x, &y); 
	p = power (x, y); 
	printf("%f", p); 
	return (0); 
} 

