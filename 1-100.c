#include<stdio.h>
#include<conio.h>

int main()
{
   int sum=0,i=1,n;
   
   scanf("%d",&n);

   	while(i<=n)
	{
	sum+=i;
  	i++;
	}
   
   printf("\n The sum of numbers from 1 to 100 is: %d",sum);
}
