#include <stdio.h> 
extern int i= 10; 
void show (void) 
{ 
	printf("extern i within show () = %d\n", i); 
}
void display (void) 
{ 
	int j = 5; 
	static int k = 5; 
	j++; 
	printf("auto variable j = %d\n", j); 
	k++; 
	printf("static variable k = %d\n", k); 
} 
int main(void) 
{ 
	register int l = 10; 
	printf("register variable 1 = %d\n\n", l); printf(" extern i in main() = %d\n", i); 
	show(); 
	printf("\nAfter first call to display () \n \n"); display(); 
	printf("\nAfter second call to display () \n\n"); display(); 
	return (0); 
} 
