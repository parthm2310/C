#include<stdio.h>
#include<conio.h>

int main()
{
	int s, i, j;
		
		for(i = 0; i <= 5; i++)
		{
			for(s = 5; s > i; s--)
				printf(" ");
			for(j=0; j<i; j++)
				printf("* ");
		printf("\n");
		}
		
		for(i = 1; i < 5; i++)
		{
			for(s = 0; s < i; s++)
				printf(" ");
			for(j = 5; j > i; j--)
				printf("* ");
		
		printf("\n");
		}
	return 0;
}
