#include<stdio.h>
#include<conio.h>

int main()
{
   int num,temp=2;
   int flag=1;

   printf("Enter a number to check whether its a prime number:");
   scanf("%d",&num);

   while(temp<num)
   {
   if(num%temp!=0)
     temp++;
   else
   {
      flag=0;
      temp++;
   }
   }

   if(flag==1)
       printf("%d is a prime number",num);
   else
       printf("%d is not a prime number",num);

   getch();
}

