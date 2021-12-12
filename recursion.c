#include<stdio.h>
#include<conio.h>

int sum(int);

void main()
{
	int num,res;
	
	printf("\nEnter the number:");
	scanf("%d",&num);
	res=sum(num);
	printf("\nThe sum of number upto %d is %d",num,res);
	
	getch();
}

int sum(int num)
{
	if(num!=0)
		return num+sum(num-1);
	else
		return num;
}
