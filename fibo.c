#include<stdio.h>    

int main()    
{    
int n,i,n1=0,n2=1,n3=0;    
   
   
printf("Enter an integer value greater than 2 for generating Fibonacci series: ");
scanf("%d",&n);

printf("\n%d, %d",n1,n2); 
n3=n1+n2;   
 	
	for(i=0;i<n-2;i++)  
	{    
  		printf(", %d",n3);    
  		n1=n2;    
 		n2=n3;
		n3=n1+n2;    
	}  
}    
