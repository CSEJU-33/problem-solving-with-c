#include <stdio.h> 
int main()
{
	int numerators[] = {1, 3, 5, 7};  
	int denominators[] = {3, 7, 11, 15}; 
	float sum = 0.0;  
	int sign = 1;
	int n = sizeof(numerators) / sizeof(numerators[0]);
	for (int i = 0; i < n; i++) 
	{
	sum += sign * (float)numerators[i] / denominators[i];
	sign *= -1;
	}
	printf("The sum of the sequence is: %.2f\n", sum);
	return 0;
}