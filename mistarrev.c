#include<stdio.h>  
#include<conio.h>
  
int main()  
{  
	int i,j,k,m=5;  
	 
   		for(i=1;i<=5;i++)  
   		{  
       		for(j=1;j<i;j++)  
        	 	printf(" ");  
       		for(k=1;k<=m;k++)  
        	 	printf("*");  
         
    	printf("\n");  
   	 	m--;  
		}  
	getch(); 
}  
