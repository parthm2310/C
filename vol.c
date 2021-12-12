#include<stdio.h>
#include<conio.h>
#define PI 3.142

void main()
{
	int side,radius,height;
	float volume;
	
	printf("Enter the side of a cube: ");
	scanf("%d",&side);
	volume=side*side*side;
	printf("Volume of the cube is: %f\n",volume);
	
	
	printf("\nEnter radius of the sphere: ");
	scanf("%d",&radius);
	volume=(radius*radius*radius)*PI*(4/3.0);
	printf("Volume of the sphere is: %f\n",volume);
	
	
	printf("\nEnter radius of the cylinder: ");
	scanf("%d",&radius);
	printf("Enter height of the cylinder: ");
	scanf("%d",&height);
	volume=PI*radius*radius*height;
	printf("Volume of the sphere is: %f",volume);
	
	getch();	
	
}
