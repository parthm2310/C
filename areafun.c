#include<stdio.h>
#include<conio.h>
#define PI 3.14

float rectangle_area(float,float);
float circle_area(float);

int main()
{
	float length, breadth, radius;
	
	printf("**********rectangle**********\n");
	
	printf("\nEnter length of the rectangle: ");
	scanf("%f", &length);
	
	printf("Enter breadth of rectangle: ");
	scanf("%f", &breadth);
	
	printf("\nArea of the rectangle is %.2f\n", rectangle_area(length, breadth));
	
	printf("\n**********circle**********\n");
	
	printf("\nEnter radius of the circle: ");
	scanf("%f", &radius);
	
	printf("\nArea of the circle is %.2f", circle_area(radius));
}

float rectangle_area(float l, float b)
{
	return l*b;
}

float circle_area(float r)
{
	return PI*r*r;
}
