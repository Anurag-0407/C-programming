/*1# C Program to check leap year. */
#include<stdio.h>
main()
{
	int year,tem;
	printf("Enter the year:");
	scanf("%d",&year);
	tem=year;
	
	if(year%100!=0 && year%400==0 || year%4==0)
	{
		printf("%d is a leap year",tem);
	}
	else
	{
		printf("%d is not a leap year",tem);
	}
}


/*2# Program to convert string from upper case to lower case and Lower to upper case.*/
#include<stdio.h>
#include<string.h>
main()
{
	char c[100];
	printf("Enter the word in small letter:");
	gets(c);
	strupr(c);
	printf("%s",c);
	char s[100];
	printf("\nEnter the word in CAPITAL letter:");
	gets(s);
	strlwr(s);
	printf("%s",s);
}


/*3# Find largest element of given array.*/
#include<stdio.h>
int main()
{
	int a[100],n,i;
	int max=0;
	printf("Enter the size of array:");
	scanf("%d",&n);
	printf("Enter the array element:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	printf("Largest element=%d",max);
}


/*4# C program to find sum of array elements.*/
#include<stdio.h>
main()
{
	int i,n, sum=0;
	int a[100] ;
	printf("Enter the size of array\n");
	scanf("%d",&n);
	printf("Enter the number:\n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	sum=sum+a[i];
}
printf("Sum =%d",sum);
}


//5# C Program to find number of elements in an array
#include<stdio.h>
main()
{
	int i,g,count=0;
	int a[]={10 ,20,202,302,2212,212,13212,411,15,56,566,5,8,1};
	g=sizeof(a)/sizeof(int);
	printf("Number of element=%d",g);
}

