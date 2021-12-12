#include<stdio.h>
#include<conio.h>

long int sum(int);

void main()
{
	int num;
	long total=0;
	
	printf("Enter a number:");
	scanf("%d", &num);
	
	if(num<=0)
	{
		printf("\nEnter a positive integer:");
		scanf("%d", &num);
		total=sum(num);
	}
	else
		total=sum(num);
	
	printf("\nsum of natural numbers upto %d is %ld", num, total);
	getch();
}

long int sum(int n)
{
	if(n>1)
		return n+sum(n-1);
	else return 1;
}
