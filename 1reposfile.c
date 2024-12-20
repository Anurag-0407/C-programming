/*1# Write a program to print the no. of bytes used by the different data type using 
the sizeof() operator*/
#include<stdio.h>
main(){ 
printf("Memory size of char = %d\n",sizeof(char));
printf("Memory size of short = %d\n",sizeof(short));
printf("Memory size of int = %d\n",sizeof(int));
printf("Memory size of long = %d\n",sizeof(long));
printf("Memory size of float = %d\n",sizeof(float));
printf("Memory size of double= %d\n",sizeof(double));
printf("Memory size of long double= %d\n",sizeof(long double));
}


/*2# Write an interactive program to find Simple Interest and Compound Interest, where Principle, 
Rate and Time are taken from the keyboard*/
#include <stdio.h>
#include <math.h>
int main() {
    float p, r, t, si, ci;
    printf("Principal amount: ");
    scanf("%f", &p);
    printf("\nRate of interest: ");
    scanf("%f", &r);
    printf("No. of years: ");
    scanf("%f", &t);
    si = (p * r * t) / 100;
    ci = p * pow((1 + r / 100), t) - p;
    printf("\nSimple Interest: %.2f\n", si);
    printf("Compound Interest: %.2f\n", ci);
}


/*3#write an interactive program to interchange the value of two variables*/
#include<stdio.h>
int main()
{
    float x,y,z;
    printf("Enter 2 numbers\n");
    scanf("%f%f",&x,&y);
    printf("Before swapping: x = %0.2f and y = %0.2f\n",x,y);
    z=x;
    x=y;
    y=z;
    printf("After swapping: x = %0.2f and y = %0.2f",x,y);
}


/*4# Write a program in C that reads the length of the three side of a triangle (a, b, 
c) and determine what type of triangle it is, based on the following cases:
i) If a >b+c no triangle is formed
ii) If a2 = b2+c2
a right-angled triangle is formed
iii) If a2> b2+c2
a obtuse angled triangle is formed
iv) If a2< b2+c2
a acute angled triangle is formed*/
#include <stdio.h>
int main() 
{
    float a, b, c;
    printf("Enter sides a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);
    float x = a * a;
    float y = b * b;
    float z = c * c;
    if (a >= b + c || b >= a + c || c >= a + b) 
    {
        printf("Invalid conditions, no triangle formed.");
    } 
    else 
    {
        if (x == y + z || y == x + z || z == x + y) 
        {
            printf("Right-angled triangle.");
        }
        else if (x > y + z || y > x + z || z > x + y) 
        {
            printf("Obtuse-angled triangle.");
        }
        else 
        {
            printf("Acute-angled triangle.");
        }
    }
}


/*5# Write a c Program to find the area and perimeter of the different Shapes
a. Rectangle
b. Circle
c. Triangle
d. Cube*/
#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    float length, width, radius, base, height, side, area, perimeter, volume, surface_area;
    printf("Select a shape to find the area and perimeter:\n");
    printf("1. Rectangle, 2. Circle, 3. Triangle, 4. Cube\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            printf("Enter length and width: \n");
            scanf("%f %f", &length, &width);
            area = length * width;
            perimeter = 2 * (length + width);
            printf("Area of Rectangle: %.2f\n", area);
            printf("Perimeter of Rectangle: %.2f\n", perimeter);
            break;
        case 2: 
            printf("Enter radius: ");
            scanf("%f", &radius);
            area = 3.14 * radius * radius;
            perimeter = 2 * 3.14 * radius;
            printf("Area of Circle: %.2f\n", area);
            printf("Circumference of Circle: %.2f\n", perimeter);
            break;
        case 3:
        {
            printf("Enter the base and height of the triangle: ");
            scanf("%f %f", &base, &height);
            area = 0.5 * base * height;
            float hypotenuse = sqrt(base * base + height * height);
            perimeter = base + height + hypotenuse;
            printf("Area of Triangle: %.2f\n", area);
            printf("Perimeter of Triangle: %.2f\n", perimeter);
            break;
        }
        case 4:
            printf("Enter the side length of the cube: ");
            scanf("%f", &side);
            surface_area = 6 * side * side;
            volume = pow(side, 3);
            printf("Surface Area of Cube: %.2f\n", surface_area);
            printf("Volume of Cube: %.2f\n", volume);
            break;
        default:
            printf("Invalid choice!\n");
    }
}


/*6# C Program to find out the ASCII value of a character*/
#include <stdio.h>

int main() 
{
    char x;
    printf("Enter a character: ");
    scanf("%c", &x);
    printf("The ASCII value of %c is: %d\n", x, x);
}


/*7# C Program to check whether an alphabet is vowel or consonant*/
#include <stdio.h>

int main () {
	char alphabet;
	printf("Enter an alphabet: ");
	scanf("%c", &alphabet);
	
	//Check if alphabet is vowel or consonant
	
	switch(alphabet){
	case 'a':
	printf("%c is a vowel.\n", alphabet);
		break;
	case 'A':
	printf("%c is a vowel.\n", alphabet);
		break;
	case 'e':
	printf("%c is a vowel.\n", alphabet);
		break;
	case 'E':
	printf("%c is a vowel.\n", alphabet);
		break;
	case 'i':
     printf("%c is a vowel.\n", alphabet);
		break;
	case 'I':
	printf("%c is a vowel.\n", alphabet);
		break;
	case 'o':
	printf("%c is a vowel.\n", alphabet);
		break;
	case 'O':
	printf("%c is a vowel.\n", alphabet);
		break;
	case 'u':
	printf("%c is a vowel.\n", alphabet);
		break;
	case 'U':
	printf("%c is a vowel.\n", alphabet);
		break;
	
	default:
	printf("%c is a consonant.\n", alphabet);
	break;		
	}
																
}
