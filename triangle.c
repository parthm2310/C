#include<stdio.h>
#include<conio.h>

int main()
{
	int i,s,t;

		for(i=1;i<=5;i++)
		{
			for(s=5;s>=i;s--)
				printf(" ");
			for(t=1;t<=i;t++)
				printf("* ");
		
		printf("\n");
		}
	getch();
}
