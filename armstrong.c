#include <math.h>
#include <stdio.h>

int main() 
{
   int num, rem, cube, arms_num=0, temp;
   
   printf("Enter a number: ");
   scanf("%d", &num);
   temp = num;
   
   while(temp>0)
   {
   		rem=temp%10;
   		arms_num+=pow(rem,3);
   		temp=temp/10;
   }
   
   	if(num==arms_num)
   		printf("\n%d is an armstrong number", num);
	else
   		printf("\n%d is not an armstrong number", num);
}
