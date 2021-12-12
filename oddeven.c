#include<stdio.h>
#include<conio.h>

int main()
{
	int num;
	
	printf("Enter a number to check whether it is odd or even: ");
	scanf("%d",&num);
		
		if(num%2==0)
		printf("%d is an even number",num);
		
		else
		printf("%d is an odd number",num);
		
	getch();
}
