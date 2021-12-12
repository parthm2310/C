#include<stdio.h>
#include<conio.h>

int odd(int);
int even(int);

int main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	printf("\n");
	
	odd(num);
	even(num);
	
	getch();
}

int odd(int n)
{
	int i;
	printf("Odd numbers between 0 and %d is: ", n);
		for(i=0;i<=n;i++)
		{
			if((i%2) !=0 && i<=n)
				printf("%d ", i);
			else if((i%2)!=0 && i==n)
				printf("%d ", i);
		}
}

int even(int n)
{
	int i;
	printf("\n\nEven numbers between 0 and %d is: ",n);
		for(i=0;i<=n;i++)
		{
			if((i%2)==0 && i<n)
				printf("%d ", i);
			else if((i%2)==0 && i==n)
				printf("%d ",i);
		}
}
