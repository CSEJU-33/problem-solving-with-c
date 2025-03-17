#include <stdio.h>
int read_number (void);
int main(void)
{
	int number;
	number = read_number();
	printf("number = %d", number);
	return 0;
}
int read_number (void)
{
	int n;
	printf("Enter a number \n");
	scanf("%d", &n);
	return n;
}
