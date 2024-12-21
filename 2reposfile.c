/*1#write an interactive program in C to find 
the week day by entering corresponding digit from the keyword (from 1 to 7) 
using switch case*/
#include <stdio.h>
main(){
	int n;
	printf("enter the number between 1 to 7=\n");
	scanf("%d",&n);
	switch(n)
	{	
	case 1: printf("sunday");
	break;
	case 2: printf("monday");
	break;
		case 3: printf("tuesday");
	break;
		case 4: printf("wednesday");
	break;
		case 5: printf("thrusday");
	break;	
	case 6: printf("friday");
	break; 
	case 7: printf("saturday");
	break;
		default: printf("invalid input");
}
}


/*2#write a program to reverse and to sum of digits of a number which you entered from the keyboard.*/
#include<stdio.h>
main()
{
	int num,digit,rev, sum=0;
	printf("enter the number to be reversed\n");
	scanf("%d",&num);
	while(num!=0)
	{
		digit=num%10;
		sum+=digit;
		rev=rev*10+digit;
		num=num/10;
	}
	
	printf("sum=%d",sum);
	printf("\nreverse=%d",rev);
}


/*3#3)	Armstrong numbers are those numbers whose sum of cubes of each digit is equal to that number.
 For example: 153 = 13 + 33 + 53 . Write a program to find all Armstrong Number in the range of 0 and 99*/
#include<stdio.h>
main()
{
	
int i,n,num,r,sum=0;
printf("Enter the number");
scanf("%d",&num);
printf("Armstrong number\n");
for(i=1;i<=num;i++)
{
	sum=0;
	n=i;
	while (n!=0)
	{
	
	r=n%10;
	sum=sum+(r*r*r);
	n=n/10;
}
if(i==sum)
printf("%d,",i);
}
return 0;
}


/*4)Write a program to check the entered numbered is palindrome or not. 
Noted that palindrome means a number and its reverse number is same. For example: 1221*/
#include<stdio.h>
 main()
{
	int  num , original,rev=0;
	printf ("enter the number");
	scanf("%d",&num);
	original=num;
	while(num!=0)
		{
		 int digit=num%10;
		rev=rev*10+digit;
		num/=10;
		
		}
	
	if(original==rev)
	{
			printf("Number is palindrome\n");
	}
		else
		{
			printf("Number is not palindrome");
		}
	}


/*5#Write a c program to print Fibonacci series: 0,1,1,2,3,5,8,13,………….*/
	#include <stdio.h>

    int main() {
    int n, t1 = 0, t2 = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    for (int i = 1; i <= n; i++) {
        printf("%d, ", t1);
        next = t1 + t2;
        t1 = t2;
        t2 = next;
    }

    return 0;
}

