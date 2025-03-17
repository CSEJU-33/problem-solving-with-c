#include<stdio.h>

int main(void)
{
	int a,b;
	char ch,operator;
	ch='y';
	do
	{
		printf("Enter two numbers\n");
		scanf("%d%d",&a,&b);
		fflush(stdin);
		printf("Enter an operator\n");
		operator=getchar();
		switch(operator)
		{
			case'+':printf("Sum=%d\n",a+b);
			break;
			case'-':printf("Difference=%d\n",a-b);
			break;
			case'*':printf("Product=%d\n",a*b);
			break;
			case'/':printf("Quotient=%d\n",a/b);
			break;
			case'%':printf("Remainder=%d\n",a%b);
			break;
			default:printf("Not an operator");
			break;
		}
		printf("Do you want to continue y/n?\n");
		fflush(stdin);
		ch=getchar;
	}while(ch=='y');
	return(0);
}
	