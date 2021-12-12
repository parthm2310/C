#include<stdio.h>
#include<conio.h>

long factorial(int);

void main(void)
{
	int num;
	long fact=1;
	
	printf("Enter a number:");
	scanf("%d", &num);
	
		if(num<=0)
		{
			printf("\nEnter a positive integer:");
			scanf("%d", &num);
			fact=factorial(num);
		}
		else
			fact=factorial(num);	
	printf("\nFactorial of %d is : %d", num, fact);
	getch();
}

long int factorial(int n)
{
	if(n>=1)
		return n*factorial(n-1);
	else 
	return 1;
}
