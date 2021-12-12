#include<stdio.h>
#include<conio.h>

int main()
{
	int n;
	
	printf("\nEnter an integer:");
	scanf("%d",&n);
	
	printf("\nReverse is:");
	
	while(n>0)
	{
		printf("%d",n%10);
		n/=10;
			
	}
	getch();
}
