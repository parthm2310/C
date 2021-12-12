#include<stdio.h>
#include<conio.h>

int square_fun(int);

void main()
{
	int num;
	printf("Entera number: ");
	scanf("%d",&num);
	printf("\n Square of a given number %d is: %d",num,square_fun(num));
	getch();
}

int square_fun(int num)
{
	return num*num;
}


