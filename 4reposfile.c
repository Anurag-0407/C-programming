/*1# If a 5-digit number is entered from keyboard. 
Write a program to print a new number by adding one to each of its digit. 
For example, for digit 12991 we get the output 23002.*/
#include<stdio.h>
#include<string.h>
main()
{
	int len,i;
	char n[6];
	printf("Enter the 5 digit number:");
	scanf("%s",&n);
	len=strlen(n);
	if(len==5)
	{
		for(i=0;i<5;i++)
		{
			int digit=n[i]-'0';
			digit=(digit+1)%10;
			printf("%d",digit);
		}
		printf("\n");
	}
	else
	{
		printf("invalid digit size");
	}
}


/*2# Write a program to print a list of prime numbers between a given ranges which you entered from the keyboard.*/
#include<stdio.h>
int main()
{
	int n1,n2;
	printf("Enter the range :");
	scanf("%d %d",&n1,&n2);
	int i,j,count=0;
	for(i=n1;i<=n2;i++)
	{
		count=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
		count++;
		}
	}
		
		if(count==2)
		{
			printf("%d, ",i);
		}
		}
	
	}
	
	
//3# Write an interactive program in C to find the factorial of a given integer.
#include<stdio.h>
main()
{
	int n,i,fact=1;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n==0||n==1)
		{
			return 1;
		}
		else
		{
			fact=fact*i;
		}
	}
	printf("Factorial:%d",fact);
}


//4# Write a C program that prints shape giving below by using nested loop: 
#include<stdio.h>
main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}


//5# Write a program to find the LCM (lowest common divisor) and HCF (Highest Common Factor) of entered two numbers.
#include<stdio.h>
main()
{
	int x,y,hcf,lcm,a,b;
	printf("Enter the two number:");
	scanf("%d %d",&x,&y);
	a=x;
	b=y;
	while(b!=0)
	{
		int temp=b;
		b=a%b;
		a=temp;
	}
	hcf=a;
	lcm=(x*y)/hcf;
	printf("HCF=%d ",hcf);
	printf("LCM=%d",lcm);
}

