//1# Program to sort array in ascending order.
#include<stdio.h>
main()
{
int a[5];
int i,j,temp;
printf("Enter the element:");
for(i=0;i<5;i++)
{
	scanf("%d",&a[i]);
	
}
for(i=0;i<5;i++)
{
	for(j=i+1;j<5;j++)
	{
	
	if(a[i]>a[j])
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
}
}
printf("Sorted array:\n");
for(i=0;i<5;i++)
{
	printf("%d ,",a[i]);
}
}


//2# Write a program in C to add two matrices of order N. You should also mention the necessary condition for matrix addition
#include<stdio.h>
main()
{
 int a[50][50],b[50][50],c[50][50];
	int n1,m1,n2,m2,i,j;
	printf("Enter the row and column of 1st matrix:");
	scanf("%d %d",&n1,&m1);
	printf("Enter the row and column of 2nd matrix:");
	scanf("%d %d",&n2,&m2);
	if(n1!=n2 || m1!=m2)
	{
		printf("order of 1st matrix is not equal to 2nd matrix");
		//break;
	}
	else
	{
		printf("Enter the elements of matrix1:\n");
		for(i=0;i<n1;i++)
		{
			for(j=0;j<m1;j++)
			{
				scanf("%d",&a[i][j]);
			}
		//break;
		}
			printf("Enter the elements of matrix2:\n");
		for(i=0;i<n1;i++)
		{
			for(j=0;j<m1;j++)
			{
				scanf("%d",&b[i][j]);
			}
		
		}
		
		for(i=0;i<n1;i++)
		{
			for(j=0;j<m1;j++)
			{
				c[i][j]=a[i][j]+b[i][j];
			//break;	
			}
			
		}
		printf("added matrix\n");
		for(i=0;i<n1;i++)
		{
			for(j=0;j<m1;j++)
			{
				printf("%d ",c[i][j]);
				
			
			
		}
		printf("\n");
			
	}
}
}


///3# Write a program in C to find the transpose of a given matrix.
#include<stdio.h>
main()
{
	int a[10][10] ,b[10][10],i,j,m,n;
	printf("Enter the order of the matrix:");
	scanf("%d %d",&m,&n);

	printf("Enter values of the matrix;\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("Transpose of matrix:\n");
		if(m!=n)
	{
		for(i=0;i<n;i++){
		for(j=0;j<m;j++)
		{
			printf("%d ",a[j][i]);
		}
		printf("\n");
	}
}
else
{

	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d ",a[j][i]);
		}printf("\n");
		}
	}
}


//4# Write a program in C to print the lower triangular and upper triangular matrix of a given matrix
#include<stdio.h>

main()
{
	int a[10][10] ,b[10][10],i,j,m,n;
	printf("Enter the order of the matrix:");
	scanf("%d %d",&m,&n);

	printf("Enter values of the matrix;\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
		printf("Upper triangular matrix:\n");
			for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(i>j)
			printf("0 ",a[i][j]);
			else
			printf("%d ",a[i][j]);
		}
		printf("\n");
}
printf("lower triangular matrix:\n");
			for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(i<j)
			printf("0 ",a[i][j]);
			else
			printf("%d ",a[i][j]);
		}
		printf("\n");
}
}

