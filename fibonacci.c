#include<stdio.h>    

int main()    
{    
int n,n1=0,n2=1,n3=0;    
   
   
printf("Enter a number for generating Fibonacci series: ");
scanf("%d",&n);

printf("\n%d, %d",n1,n2); 
n3=n1+n2;   
 	
	while(n3<=n)  
	{    
  		printf(", %d",n3);    
  		n1=n2;    
 		n2=n3;
		n3=n1+n2;    
	}  
}    
