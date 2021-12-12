#include<stdio.h>
#include<conio.h>

int main()
{
	int num,sum=0,temp,digit;
	
	printf("Enter a number: ");
	scanf("%d",&num);
	temp=num;
	
		while(temp>0)
		{
			digit=temp%10;
			sum+=digit*digit;
			temp=temp/10;
		}
	printf("Sum of square of digits of the digit %d is: %d",num,sum);
	getch();
}
