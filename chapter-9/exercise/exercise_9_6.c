#include <stdio.h>
#include<math.h>
int mul(int,int);

int main()
{
	int num;
	printf("num:");
	scanf("%d",&num);
	for(int i=1;i<=10;i++)
	{
		printf("%d X %2d =%2d\n",num,i,mul(num,i));
	}
	
	return 0;
}
int mul(int n,int i)
{
	

	 return n*i;
	
	

	
}
