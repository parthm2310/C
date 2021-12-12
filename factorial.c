#include<stdio.h>
#include<conio.h>

int main()
{
   int num,temp;
   long result=1;

   printf("Enter a number to find its factorial:");
   scanf("%d",&num);
   temp=num;

   while(temp>0)
     result*=temp--;

   printf("Factorial of %d : %ld",num,result);

   getch();
}

