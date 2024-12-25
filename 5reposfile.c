//1# Write a C function to calculate the factorial of a number
#include<stdio.h>
int factorial(int);
int factorial(int n)
{
	if(n==0||n==1)
	{
		return 1;
	}
	else
	{
	return n*factorial(n-1);
	}
}
int main()
{
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	printf("Factorial of %d=%d",n,factorial(n));
}


//2# Write a C function to print Fibonacci series.
#include<stdio.h>
void fibonacci(int);
void fibonacci(int z){
	int a=0,b=1,c,i;
	printf("%d,%d,",a,b);
	  for (i = 3; i <= z; i++){
	  
	c=a+b;
	printf("%d, ",c);
	a=b;
	b=c;
}
}

int main()
{
	int x,i,a;
	printf("enter the term");
	scanf("%d, ",&x);
fibonacci(x);
return 0;
	 }
	 
	 
// 3# Write a C function to check whether a number is prime or not.
#include<stdio.h>
int isprime(int n){
	int i;
	if(n<=1)
return 0;
for (i=2;i*i<=n;i++){
	if(n%i==0)
	return 0;
} return 1;
	}

int main(){
	int num;
	printf("Enter the number:");
	scanf("%d",&num);
	if(isprime(num)){
		printf("Prime");
	}
	else
	{
		printf("Not prime");
	}
}






