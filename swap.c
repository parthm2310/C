#include<stdio.h>
#include<conio.h>

void main()
{
int x,y;

printf("Enter value for X: ");
scanf("%d",&x);
printf("Enter value for Y: ");
scanf("%d",&y);


x=x+y;
y=x-y;
x=x-y;

printf("\nAfter swapping: \n");
printf("x: %d\n",x);
printf("y: %d\n",y);
getch();
} 

