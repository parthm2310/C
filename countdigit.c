#include<stdio.h>
#include<conio.h>

int main()
{
	long number;
	short count=0;
	
	printf("Enter a number: ");
	scanf("%d", &number);
	
		while(number>0)
		{
			number/=10;
			++count;
		}
	printf("The number of digits in the number is: %d",count);
	getch();
}
