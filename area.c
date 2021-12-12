#include<stdio.h>
#include<conio.h>

void main()
{
int side, length, breadth, radius;
float area;

printf("Enter length of the rectangle: ");
scanf("%d",&length);
printf("Enter breadth of the rectangle: ");
scanf("%d",&breadth);
area=length*breadth;
printf("Area of the rectangle is: %f\n",area);

printf("\nEnter side of the square: ");
scanf("%d",&side);
area=side*side;
printf("Area of the square is: %f\n",area);

printf("\nEnter the radius of the circle: ");
scanf("%d",&radius);
area=3.142*radius*radius;
printf("Area of the circle is: %f\n",area);

getch();
}

