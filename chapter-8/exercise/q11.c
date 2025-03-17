#include<stdio.h>
#include<math.h>

long long factorial(int n){
	long long fact=1;
	for(int i =1;i<=n;i++){
		fact*=i;
	}
	return fact;
}
int main(void)
{
	double x,sum=0.0,term;
	int n;
	printf("Enter the value of x(in radians):");
	scanf("%lf",&x);
	printf("Enter the number of terms:");
	scanf("%d",&n);
	
	
	for (int i=0;i<n;i++){
		int sign=(i%2==0)?1:-1;
		term=pow(x,2*i)/factorial(2*i);
		sum+=sign*term;
	}
	printf("The sum of the cosine series is :%lf\n",sum);
	return(0);
}