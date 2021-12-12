#include<stdio.h>
#include<conio.h>

int main()
{
	int i,s,t;
		
		for(i = 0; i < 5; i++)
		{
			for(s = 0; s < i; s++)
				printf(" ");
			for(t = 5; t > i; t--)
				printf("* ");
		
		printf("\n");
		}
	return 0;
}
