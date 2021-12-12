#include <stdio.h>  
#include<conio.h>
  
int main()  
{  
    int i,j,k,m=1,s=5;  
    
    	for(i=5;i>=1;i--)  
    	{  
    	    for(j=1;j<=i-1;j++)  
    			printf(" ");  
    	    for(k=1;k<=m;k++)  
    	      	printf("*");  
          
    	    printf("\n");  
    	    m++;  
    	} 
		 
    	for(i=1;i<=5;i++)  
   		{  
       		for(j=1;j<i;j++)  
        	 	printf(" ");  
       		for(k=1;k<=s;k++)  
        	 	printf("*");  
         
    	printf("\n");  
   	 	s--;  
		}
		
	getch();  
}  
